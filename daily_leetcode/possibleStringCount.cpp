class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size();
        int total=1;
        vector<int>groupCounts;
        int count=1;
        for(int i=1;i<n;i++)
        {
           if(word[i-1]==word[i])
           {
               count++;
           }
           else{
               groupCounts.push_back(count);
               count=1;
           }
        }
         groupCounts.push_back(count);

         for(int i=0;i<groupCounts.size();i++)
         {
            if(groupCounts[i]>1)
            {
                total=total+(groupCounts[i]-1);
            }
         }
       

        
          
       return total;

   

    }
};