class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
      int ans=0;
      string t="";
      for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            int temp=0;
            if(s[i]==s[j] && i!=j){
                temp=(j-i)-1;
                ans=max(ans,temp);
                t+=s[i];

            }
        }
      }
      if(t=="")return -1;
      else return ans;
        
    }
};