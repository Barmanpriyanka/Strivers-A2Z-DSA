class Solution {
public:
     void solve(int k,int remsum,vector<vector<int>> &ans,vector<int>&output,int start){
          //base case
          if(remsum==0 && output.size() == k)
          {
            ans.push_back(output);
            return;
          }

          if(output.size()>k || remsum<0)
          {
            return;
          }

          for(int i=start;i<=9;i++)
          {
               output.push_back(i);
               solve(k,remsum-i,ans,output,i+1);
               output.pop_back();  
          }

     }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int>output;
        solve(k,n,ans,output,1);
        return ans;
    }
};