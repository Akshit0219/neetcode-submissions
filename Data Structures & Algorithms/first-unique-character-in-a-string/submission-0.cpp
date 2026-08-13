class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char,int>mpp;
       for(auto it:s){
          mpp[it]++;
       } 
       vector<char>arr;
       for(auto it:mpp){
         if(it.second==1){
            arr.push_back(it.first);
         }
       }
       int ans=-1;
       for(int i=0;i<s.size();i++){
         auto it = find(arr.begin(),arr.end(),s[i]);
         if(it!=arr.end()){
            ans=i;
            break;
         }
       }
       return ans;

    }
};