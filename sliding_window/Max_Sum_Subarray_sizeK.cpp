class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int sum=0;
        int n=arr.size();
        int mx=INT_MIN;
        int i=0;
        int j=0;
        while(j<n){
            sum=sum+arr[j];
            if(j-i+1<k){
                j++;
            }
            
            else if(j-i+1==k){
                mx=max(sum,mx);
                sum=sum-arr[i];
                i++;
                j++;
            }
        }
        return mx;
    }
};