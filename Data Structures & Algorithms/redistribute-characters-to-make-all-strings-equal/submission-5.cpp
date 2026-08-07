class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>mpp;
        for(string c:words){
            for(char it:c)mpp[it]++;
        }
        set<int>s;
        for(auto it:mpp){
            if(it.second% words.size()!=0)return false;
        }
        return true;
    }
};