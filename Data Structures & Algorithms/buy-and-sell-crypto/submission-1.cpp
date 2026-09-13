class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int ans=0;
       int minbuy=prices[0];
       for(auto it:prices){
          ans=max(ans,it-minbuy);
          minbuy=min(minbuy,it);
       }
       return ans;
    }
};
