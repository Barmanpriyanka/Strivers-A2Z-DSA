class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1;  

        int sum = 0, count = 0;

        for (int num : nums) {
            sum += num;

            
            if (prefixCount.find(sum - goal) != prefixCount.end()) {
                count += prefixCount[sum - goal];
            }

            
            prefixCount[sum]++;
        }

        return count;
    }
};


//another and optimal aproach 

class Solution {
    int solve(vector<int>& nums,int goal)
    {
        int n=nums.size();
        int sum=0;
        int count=0;
        int left=0;

        if(goal<0){
        return 0;}

        for(int right=0;right<n;right++)
        {
            sum=sum+nums[right];
          
            while(sum > goal)
            {
                 sum=sum-nums[left];
                left++;
            }

            count =count+(right-left+1);
        }

        return count;

    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums,goal)-solve(nums,goal-1);
    }

};