class Solution{
    public:
    void heapify(vector<int> &arr, int n, int i) {
    int largest = i;          
    int left = 2 * i + 1;     
    int right = 2 * i + 2;    

    
    if (left < n && arr[left] > arr[largest])
        largest = left;

    
    if (right < n && arr[right] > arr[largest])
        largest = right;

    
    if (largest != i) {
        std::swap(arr[i], arr[largest]); 

        
        heapify(arr, n, largest);
    }
}
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        //step 1merge two arrays 
        vector<int>ans;
        
        
        for(auto i:a)
        {
            ans.push_back(i);
        }
        for(auto i:b)
        {
            ans.push_back(i);
        }
        //step 2 build heap using merged array
        int size =ans.size();
        for(int i=size/2-1;i>=0;i--)
        {
            heapify(ans,size,i);
        }
        return ans;
        
    }
};