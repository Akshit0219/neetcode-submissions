class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int a=g.size(),b=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0,count=0;
        while(i<a && j<b){
            if(s[j]>=g[i]){
                count++;
                i++;
                
            }
            j++;

        }
        return count;
    }
};