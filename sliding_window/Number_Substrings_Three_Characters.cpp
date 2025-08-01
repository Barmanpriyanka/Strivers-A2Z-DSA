class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
          int left=0;
          int count=0;
          int countA[3]={0};
          for(int right=0;right<n;right++)
          {
                countA[s[right]-'a']++;
                while(countA[0] >0 && countA[1] > 0 && countA[2] > 0)
                {
                    count=count+(n-right);
                    countA[s[left]-'a']--;
                    left++;

                }

               

          }
          return count;

    }
};