//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    vector<int> lcmAndGcd(int a, int b) {
        // code hereint gcdValue = gcd(a, b);
        // Compute GCD using built-in gcd function
        int gcdValue = __gcd(a, b);
        
        // Compute LCM using the formula
        int lcmValue = (a * b) / gcdValue;
        
        // Return the result as a vector containing LCM and GCD
        return {lcmValue, gcdValue};
    
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends