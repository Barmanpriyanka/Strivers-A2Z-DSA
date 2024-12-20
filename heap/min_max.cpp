//User function Template for C++

class Solution{
public:
    void heapify(vector<int> &arr,int i)
    {
        int n=arr.size();
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<n && arr[left] > arr[largest])
        {
            largest=left;
        }
        if(right<n && arr[right] > arr[largest])
        {
            largest=right;
        }
        
        if(largest!=i)
        {
            swap(arr[i], arr[largest]);

            
            heapify(arr,largest);
        }
    }

    void convertMinToMaxHeap(vector<int> &arr, int N){
          for(int i=N/2-1;i>=0;i--)
          {
              heapify(arr,i);
          }
    }
    
};