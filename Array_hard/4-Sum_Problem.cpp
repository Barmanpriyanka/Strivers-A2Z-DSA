class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n-3;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            for(int j=i+1;j<n-2;j++)
         {
                if (j > i + 1 && nums[j] == nums[j - 1])
            {
                continue;
            }

            long long sum=(long long)target-(long long)(nums[i]+nums[j]);
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                if((long long)nums[k]+nums[l] == sum)
                {
                     vector<int>oneans={nums[i],nums[j],nums[k],nums[l]};
                     ans.push_back(oneans);
                     while( k<l && nums[k]==nums[k+1])
                     {
                        k++;
                     }
                     while(k<l && nums[l]==nums[l-1])
                     {
                        l--;
                     }

                     k++;
                     l--;

                }
                else if(nums[k]+nums[l]<sum){
                    k++;
                }
                 else if(nums[k]+nums[l]>sum){
                    l--;
                }


            }

                
            }
        }
        return ans;

    }
};