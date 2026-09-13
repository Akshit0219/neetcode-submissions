class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left=0,right=k-1;
        int count=0;
        while(right<arr.size()){
            int sum=accumulate(arr.begin()+left,arr.begin()+right+1,0);
            if((sum/k)>=threshold){
                count++;
            }
            left++;
            right++;
        }
        return count;
    }
};