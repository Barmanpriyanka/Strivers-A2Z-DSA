class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int left=0;
        int sum=0;
        int totalPoints=0;
        int minsum=INT_MAX;
        

        for(int i=0;i<n;i++){
            totalPoints=totalPoints+cardPoints[i];
        }

        if (n == k) {
         return totalPoints;
       }
        
        for(int right=0;right<n;right++)
        {    
             sum=sum+cardPoints[right];
             if(right-left+1 > n-k)
            {    sum=sum-cardPoints[left];
                left++;
            }

            if(right-left+1 == n-k){
               minsum=min(sum,minsum);
           }
           

        }

          return totalPoints-minsum;
    }
};