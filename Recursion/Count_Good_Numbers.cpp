class Solution {
public:
  const int MOD=1e9+7;

   long long power(long long x, long long n) {
        if (n == 0) return 1;
        long long half = power(x, n / 2);
        long long result = (half * half) % MOD;
        if (n % 2 == 0) {
            return result;
        } else {
            return (x % MOD * result) % MOD;
        }
    }
    
    int countGoodNumbers(long long n) {
        long long even_pos = (n + 1) / 2; // ceil
        long long odd_pos = n / 2;        // floor

        long long evenWays = power(5, even_pos);
        long long oddWays = power(4, odd_pos);

        return (evenWays * oddWays) % MOD;
    }
};