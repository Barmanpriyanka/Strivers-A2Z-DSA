class Solution {
public:
    int beautySum(string s) {
        
        int ans=0;
        for(int i=0;i<s.length();i++)
        {       map<char,int>m;
            for(int j=i;j<s.length();j++)
            {  
               m[s[j]]++;

               int mf=0,lf=INT_MAX;
               for(auto a:m)
               {
                   mf=max(mf,a.second);
                   lf=min(lf,a.second);
               }
               ans=ans+(mf-lf);

            }

        }
        return ans;
    }
};

    
