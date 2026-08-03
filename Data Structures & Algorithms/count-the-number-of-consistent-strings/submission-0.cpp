class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mpp1;
        for(char c:allowed){
            mpp1[c]++;
        }
        int count=0;
        for(string w:words){
            unordered_map<char,int>check;
            for(char i:w){
                check[i]++;
            }
            bool a=true;
            for(auto it:check){
                if(!mpp1[it.first]){
                   a=false;
                }
            }
            if(a==true)count++;
        }
        return count;
    }
};