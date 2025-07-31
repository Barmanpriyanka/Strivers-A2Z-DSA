class Solution {
    int solve(vector<int>& nums,int k)
    {
        int n=nums.size();
        int sum=0;
        int count=0;
        int left=0;
        for(int right=0;right<n;right++)
        {
            sum=sum+(nums[right]%2);
            while(sum>k)
            {
                sum=sum-(nums[left]%2);
                left++;
            }
            count=count+(right-left+1);
        }
        return count;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       return solve(nums,k)-solve(nums,k-1);

    }

};