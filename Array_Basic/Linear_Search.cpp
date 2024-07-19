class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       int s=0;
       int e=N-1;
       while(s<=e)
       {
           int mid=s+(e-s)/2;
           if(K==arr[mid])
           {
               return 1;
           }
           else if(K>arr[mid])
           {
               s=mid+1;
           }
           else if(K<arr[mid])
           {
             e=mid-1;   
           }
           
       }
       return -1;
       
    }
};