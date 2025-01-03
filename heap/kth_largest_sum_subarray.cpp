//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        vector<int>sumStore;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+arr[j];
                sumStore.push_back(sum);
            }
        }
        sort(sumStore.begin(),sumStore.end());
        return sumStore[sumStore.size()-k];
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        int res = obj.kthLargest(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends







// approach 2
 int kthLargest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>> mini;
        int n= arr.size();
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+arr[j];
                if(mini.size()< k)
                {
                    mini.push(sum);
                }
                else {
                    if(sum > mini.top()){
                        mini.pop();
                        mini.push(sum);
                    }
                }
            }
        }
        return mini.top();
    }