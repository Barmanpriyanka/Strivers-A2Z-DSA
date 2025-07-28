class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int hash[26] = {0};
        int left = 0, maxlen = 0, maxf = 0;

        for (int right = 0; right < n; right++) {
            hash[s[right] - 'A']++;
            maxf = max(maxf, hash[s[right] - 'A']);

            if ((right - left + 1) - maxf > k) {
                hash[s[left] - 'A']--;
                left++;
            }

            maxlen = max(maxlen, right - left + 1);
        }

        return maxlen;
    }
};
