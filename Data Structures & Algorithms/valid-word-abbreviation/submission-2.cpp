class Solution {
public:
    bool validPalindrome(string s) {
        if (ispalindrome(s)){
           return true;
        }
        
        for(int i=0;i<s.size();i++){
          string k=s.substr(0,i)+s.substr(i+1);
          if (ispalindrome(k)){
            return true;
          }
        }
        return false;
    }
    bool ispalindrome(string s){
      int l=0,r=s.size()-1;
      while(l<r){
        if(s[l++]!=s[r--]){
          return false;
        }
        
      }
      return true;

      
    }
};