class Solution {
  public:
   void arrayhelper(vector<int> &arr,int s,int e)
   {
       if(s>=e)
       {
           return;
       }
       
       swap(arr[s],arr[e]);
       arrayhelper(arr,s+1,e-1);
   }
   
    void reverseArray(vector<int> &arr) {
        // code here
        
        arrayhelper(arr,0,arr.size()-1);
        
    }
};