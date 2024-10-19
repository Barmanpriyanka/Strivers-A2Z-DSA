class Solution {
public:
int maxElement(vector<int>& nums){
    int sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        sum=max(sum,nums[i]);
    }
    return sum;
}
int Totalsum(vector<int>& nums,int divisor){
      int total=0;
      int n=nums.size();
      for(int i=0;i<n;i++)
      {
        total+=ceil((double)(nums[i])/(double)(divisor));
      }
   return total;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=maxElement(nums);
         int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int Total=Totalsum(nums,mid);
            if(Total<=threshold)
            {
                  ans=mid;
                  high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }

};