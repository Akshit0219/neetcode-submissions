class Solution {
public:
    bool validPalindrome(string s) {
        if (ispalindrome(s)){
            return true;
        }
        for(int i=0;i<s.length();i++){
            string a=s.substr(0,i)+s.substr(i+1);
            if(ispalindrome(a)){
                return true;
            }
        }
        return false;
    }
    bool ispalindrome(string& s){
        int left=0,right=s.length()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};