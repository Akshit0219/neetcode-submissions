class Solution {
public:
    string minWindow(string s, string t) {
         int n=s.size();
        if(t.size()>s.size()){
            return "";
        }
        unordered_map<char,int>mpp;
        for(auto it:t){
            mpp[it]++;
        }
        int reqcount=t.size();
        int start_i=0,minwin=INT_MAX;
        int i=0,j=0;
        while(j<n){
            if(mpp[s[j]]>0){
                reqcount--;
            }
            mpp[s[j]]--;
            while(reqcount==0){
                int currwin=j-i+1;
                if(currwin<minwin){
                    minwin=currwin;
                    start_i=i;
                }
                mpp[s[i]]++;
                if(mpp[s[i]]>0){
                    reqcount++;
                }
                i++;
            }
            j++;

        }
        return minwin==INT_MAX?"":s.substr(start_i,minwin);
    }
};
