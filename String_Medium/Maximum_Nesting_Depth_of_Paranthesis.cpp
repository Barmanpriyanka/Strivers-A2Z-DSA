class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        int curr=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                curr++;
                if(max<curr)
                {
                    max=curr;
                }
            }
          else if(s[i]==')')
            {
                curr--;
            }
        }
        return max;
    }
};