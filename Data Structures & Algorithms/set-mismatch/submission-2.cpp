class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int target;
        for(auto it:mpp){
            if(it.second>1){
                target=it.first;
            }
        }
        vector<int>ans;
        ans.push_back(target);
        for(int i=1;i<=nums.size();i++){
            if(find(nums.begin(),nums.end(),i)!=nums.end())continue;
             else  { ans.push_back(i);
                break;
             }   
        }
        return ans;
    }
};