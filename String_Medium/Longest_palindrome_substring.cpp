class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1) {
            return s;
        }
        
        string lps = ""; // Longest Palindromic Substring
        
        for (int i = 0; i < s.length(); i++) {
            // Odd length palindromes
            int low = i;
            int high = i;
            while (low >= 0 && high < s.length() && s[low] == s[high]) {
                if (high - low + 1 > lps.length()) {
                    lps = s.substr(low, high - low + 1);
                }
                low--;
                high++;
            }
            
            // Even length palindromes
            low = i;
            high = i + 1;
            while (low >= 0 && high < s.length() && s[low] == s[high]) {
                if (high - low + 1 > lps.length()) {
                    lps = s.substr(low, high - low + 1);
                }
                low--;
                high++;
            }
        }
        
        return lps;
    }
};
