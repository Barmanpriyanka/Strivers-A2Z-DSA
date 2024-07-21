class Solution {
public:
    bool isAnagram(string s, string t) {
       int s1 = s.length();
        int t1 = t.length();

        if (s1 != t1) {
            return false;
        }

        // Initialize the array to zero
        int* a = new int[26]();
        
        // Count characters in the first string
        for (int i = 0; i < s1; ++i) {
            a[s[i] - 'a']++;
        }

        // Subtract counts using the second string
        for (int i = 0; i < t1; ++i) {
            a[t[i] - 'a']--;
            if (a[t[i] - 'a'] < 0) {
                
                return false;
            }
        }

       
        return true;

    }
};