class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
       int curlen=1,res=1;
       for(int i=1;i<nums.size();i++){
          if(nums[i]==nums[i-1]||((nums[i-curlen]<nums[i-curlen+1]) != (nums[i-1]< nums[i]))){
            curlen=(nums[i]==nums[i-1])? 1:2;
            continue;
          }
       
       curlen++;
       res=max(res,curlen);
       }
       return res;
    }
};