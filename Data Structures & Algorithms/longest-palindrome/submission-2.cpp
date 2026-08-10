class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        int res=0;
        for(auto it:mpp){
            if(it.second%2==0){
                res+=it.second;
            }
            else{
                int k=(it.second/2);
                res+=k*2;
            }
        }
        return res+(res<s.size());
    }
};