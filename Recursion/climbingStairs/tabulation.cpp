class Solution {
public:
    int solve(vector<int>&dp,int n){
        dp[1]=1;
        dp[0]=1;

        for(int i=2;i<=n;i++)
        {
                dp[i]=dp[i-1]+ dp[i-2];
        }
        return dp[n];

     }

    int climbStairs(int n) {
        vector<int>dp(n+1);
        return solve(dp,n);
    }
        
      };  
           
      
       
      
    
        
        
  

 

     
