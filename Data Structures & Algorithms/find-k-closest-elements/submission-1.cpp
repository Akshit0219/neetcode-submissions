class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int sum=0,ans=INT_MAX;
        for(int i=0;i<k;i++){
            sum+=abs(x-arr[i]);
        }
        ans=sum;
        int i=0,j=k,start=0;
        int n=arr.size();
        for(j=k;j<n;j++){
            sum-=abs(x-arr[i]);
            sum+=abs(x-arr[j]);
            i++;
            if(sum<ans){
                ans=sum;
                start=i;
            }
        }
        vector<int>nums;
        for(int z=start;z<start+k;z++){
            nums.push_back(arr[z]);
        }
        return nums;
    }
};