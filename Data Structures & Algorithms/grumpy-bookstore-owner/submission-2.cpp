class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans = 0;
        for (int i = 0; i < customers.size(); i++) {
            if(grumpy[i]==0){
                ans+=customers[i];
            }
        }
        int sum=0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1)sum+=customers[i];
        }
        int extra=sum;
        
        for(int i=minutes;i<customers.size();i++){
            if(grumpy[i]==1){
                sum+=customers[i];
            }
            if(grumpy[i-minutes]==1){
                sum-=customers[i-minutes];
            }
            extra=max(extra,sum);
        }
       return ans+extra;


        
    }
};