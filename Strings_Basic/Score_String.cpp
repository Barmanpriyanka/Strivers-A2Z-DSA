class Solution {
    public:
        int scoreOfString(string s) {
            int n=s.length();
            int sum=0;
            for(int i=0;i<n-1;i++)
            {
                
                int diff=abs((s[i])-(s[i+1]));
                sum=sum+diff;
    
             }
             return sum;
        }
    };