class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(int x:nums){
            mpp[x]++;
        }
        for(auto i:mpp){
            if(i.second>1)return true;
        }
        return false;
    }
};