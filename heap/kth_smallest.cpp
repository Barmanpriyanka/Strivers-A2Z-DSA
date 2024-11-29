//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        //step 1   max heap for the k th element in the array 
        int n=arr.size();
         priority_queue<int>pq;
         for(int i=0;i<k;i++)
         {
             pq.push(arr[i]);
         }
         //step2  for remaing element after k th element 
         for(int i=k;i<n;i++)
         {
             if(arr[i]<pq.top())
             {
                 pq.pop();
                 pq.push(arr[i]);
             }
         }
         return  pq.top();
         
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        k = crr[0];
        int n = arr.size();
        Solution ob;
        cout << ob.kthSmallest(arr, k) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends