// User function Template for C++
class Solution {
  public:
    int sumOfDivisors(int n) {
        // Write Your Code here
      int result=0;
    for(int i=1;i<=n;i++)
    {
        int divisor=i*(n/i);
        result=result + divisor;
        
    }
     return result;
     
    }
};