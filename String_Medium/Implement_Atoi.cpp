class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        int i=0;
        int n=s.length();
        int  result=0;
        //to remove whitespaces
        while(i<n && s[i]==' ')
        {
            i++;
        }
        //to handle sign
        if(i<n  &&  (s[i]=='+' || s[i]=='-'))
        {
            sign=s[i]=='+'?1:-1;
            i++;
        }
        
        while(i<n)
        {
           int digit=s[i]-'0';
           if(digit<0 || digit>9)
           {
                   break;   
           }
           // Check for overflow/underflow
            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

              result = result * 10 + digit;
            i++;

        }

        return result*sign;
    }
    
};