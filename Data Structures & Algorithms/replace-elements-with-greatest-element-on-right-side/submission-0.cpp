class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
        int right=-1;
        for(int i=n-1;i>=0;i--){
            ans[i]=right;
            right=max(right,arr[i]);
        }
        return ans;

    }
};