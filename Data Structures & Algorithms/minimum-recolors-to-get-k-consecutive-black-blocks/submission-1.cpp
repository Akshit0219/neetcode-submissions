class Solution {
public:
    int helper(string temp,int k){
        unordered_map<char,int>mpp;
        for(int i=0;i<temp.size();i++){
            mpp[temp[i]]++;
        }
        return mpp['W'];
    }
    int minimumRecolors(string blocks, int k) {
        int left=0,right=k-1;
        int ans=INT_MAX;
        while(right<blocks.size()){
            string temp=blocks.substr(left,right-left+1);
            ans=min(ans,helper(temp,k));
            left++,right++;
        }
        return ans;
    }
};