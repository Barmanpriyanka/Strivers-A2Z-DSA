//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int>ans;
        for(int i=0;i<K;i++)
        {
            for(int j=0;j<K;j++)
            {
                int element=arr[i][j];
                pq.push(element);
            }
        }
        
         while (!pq.empty()) {
         ans.push_back(pq.top());
        pq.pop();
    }
        
        return ans;
    }
};