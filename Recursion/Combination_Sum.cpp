class Solution {
public:
void solve(vector<int>& candidates,vector<vector<int>> &ans,vector<int>output,int index,int remsum)
{
      //base case
      if(remsum == 0 )
      {
            ans.push_back(output);
            return;
      }
       if(remsum < 0)
       {
         return;
       }

      for(int i=index;i<candidates.size();i++)
      {
         output.push_back(candidates[i]);
         solve(candidates,ans,output,i,remsum-candidates[i]);
          output.pop_back();
      } 


}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>output;
        solve(candidates,ans,output,0,target);
        return ans;
    }
};