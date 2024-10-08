class Solution {
public:
    string removeOuterParentheses(string s) {
        int counter = 0;
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                if (counter != 0) {
                    ans.push_back(s[i]);
                }
                counter++;
            } else {
                counter--;
                if (counter != 0) {
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;
    }
};