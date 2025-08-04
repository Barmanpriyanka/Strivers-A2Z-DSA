class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size();
        int left = 0;
        int formed = 0;
        unordered_map<char, int> targetfreq;
        unordered_map<char, int> windowfreq;

        for (char ch : t) {
            targetfreq[ch]++;
        }

        int required = targetfreq.size();
        int minLen = INT_MAX;
        int startIdx = 0;

        for (int right = 0; right < m; right++) {

                windowfreq[s[right]]++;

                if(targetfreq.count(s[right]) && targetfreq[s[right]]     ==windowfreq[s[right]])
                {
                formed++;
                }

                while(left<=right && formed==required ){
                    if((right-left+1)< minLen)
                    {
                        minLen=right-left+1;
                        startIdx=left;

                    }

                    windowfreq[s[left]]--;
                    if(targetfreq.count(s[left]) && windowfreq[s[left]] < targetfreq[s[left]])
                    {
                        formed--;
                    }

                    left++;
                }



        }

        return  (minLen == INT_MAX) ? "" : s.substr(startIdx, minLen);;
    }
};