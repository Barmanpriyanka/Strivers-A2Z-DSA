class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq(nums.begin(),nums.end());
        int ans=0;

        while(k--)
        {
            ans=pq.top();
            pq.pop();
        }
        return ans;
    }
};


//second approach
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;

        for(auto x:nums){
            pq.push(x);
            if(pq.size()>k)
            {
                pq.pop();
            }
            
        }
        return pq.top();
    }

};


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        //step 1 
         priority_queue<int,vector<int>,greater<int>>pq;
         for(int i=0;i<k;i++)
         {
             pq.push(nums[i]);
         }
         //step2  for remaing element after k th element 
         for(int i=k;i<n;i++)
         {
             if(nums[i]>pq.top())
             {
                 pq.pop();
                 pq.push(nums[i]);
             }
         }
         return  pq.top();
         
    }
};
         


class Solution {
    public:
      vector<int> kLargest(vector<int>& arr, int k) {
          // Your code here
          priority_queue<int,vector<int>,greater<int>>minheap;
          for(int num:arr)
          {
              minheap.push(num);
              if(minheap.size()>k)
              {
                  minheap.pop();
              }
          }
          
          vector<int>ans;
          while(!minheap.empty()){
              ans.push_back(minheap.top());
              minheap.pop();
          }
          
          sort(ans.rbegin(),ans.rend());
          return ans;
          
      }
  };