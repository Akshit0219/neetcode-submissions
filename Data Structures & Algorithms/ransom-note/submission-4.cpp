class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int>mpp1,mpp2;
       for(char it:ransomNote){
          mpp1[it]++;
       } 
       for(char it:magazine){
         mpp2[it]++;
       }
       
       for(auto it:mpp1){
         if(mpp2[it.first]<it.second){
            return false;
         }
       }
       return true;

    }
};