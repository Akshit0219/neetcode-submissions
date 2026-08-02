class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>count;
        for(char c:chars){
            count[c]++;
        }
        int res=0;
        for(string w:words){
            unordered_map<char,int>check;
            for(char c:w){
                check[c]++;
            }
            bool ans=true;
            for(auto c:check){
                if(c.second > count[c.first]){
                   ans=false; 
                }
            }
            if(ans==true){
                res+=w.size();
            }

        }
        return res;

    }
};