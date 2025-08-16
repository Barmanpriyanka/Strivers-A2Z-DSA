class Solution {
public:
void solve(vector<int>& nums,int index,vector<vector<int>>&ans,vector<int>&output){
    //base case
    if(index==nums.size())
    {   ans.push_back(output);
        return;
    }
    //exclude
     int nextIndex = index + 1;
        while (nextIndex < nums.size() && nums[nextIndex] == nums[index]) {
            nextIndex++;
        }
        solve(nums, nextIndex, ans, output);
    //include
    
    output.push_back(nums[index]);
    solve(nums,index+1,ans,output);
    output.pop_back();
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        sort(nums.begin(), nums.end());
        solve(nums,0,ans,output);
        return ans;
    }
};