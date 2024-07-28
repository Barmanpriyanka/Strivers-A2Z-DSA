class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        roman.insert(make_pair('I', 1));
        roman.insert(make_pair('V', 5));
        roman.insert(make_pair('X', 10));
        roman.insert(make_pair('L', 50));
        roman.insert(make_pair('C', 100));
        roman.insert(make_pair('D', 500));
        roman.insert(make_pair('M', 1000));
        
        int len = s.length();
        int sum = 0;
        
        for (int i = 0; i < len; i++) {
            if (i < len - 1 && roman[s[i]] < roman[s[i + 1]]) {
                sum += roman[s[i + 1]] - roman[s[i]];
                i++;
            } else {
                sum += roman[s[i]];
            }
        }
        
        return sum;
    }
};
