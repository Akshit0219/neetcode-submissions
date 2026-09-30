class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int j=s1.size()-1,i=0;
       map<char,int>mpp1;
       for(auto it:s1){
           mpp1[it]++;
       }

       while(j<s2.size()){
           map<char,int>mpp2;
           for(int x=i;x<=j;x++){
             mpp2[s2[x]]++;
           }
           if(mpp2==mpp1)return true;
           i++;
           j++;
       }
       return false; 
    }
};
