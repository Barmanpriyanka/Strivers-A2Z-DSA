class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero=0;
         int maxlength=0;
        int n=nums.size();
        int left=0;
        for(int right=0;right<n;right++)
        {
                 if(nums[right]==0)
…                    left++;
                 }

                 maxlength=max(maxlength,right-left+1);

        }

        return maxlength;
    }
};