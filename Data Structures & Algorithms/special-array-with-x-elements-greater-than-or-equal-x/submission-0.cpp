class Solution {
public:
    int specialArray(vector<int>& nums) {
       int n=nums.size();
       int ans=-1;
       while(n>0){
         int count=0;
         for(int it:nums){
            if(n<=it){
                count++;
            }
         }
         if(count==n){
            ans=count;
         }
         n--;
       } 
       return ans;

    }
};