class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>hashset;
         int n=nums.size();
         if(n<3)
         {
            return {};
         }

       sort(nums.begin(),nums.end());

       for(int i=0;i<n;i++)
       {
              int left=i+1;
              int right=n-1;
              while(left<right)
              {
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0)
                {
                     hashset.insert({nums[i],nums[left],nums[right]});
                     left++;
                     right--;
                }
                else if(sum<0)
                {
                    left++;
                }
                else{
                    right--;
                }
               
              }
               
            
       }
          vector<vector<int>> result (hashset.begin(),hashset.end());
           return result;

          

    }
   
};