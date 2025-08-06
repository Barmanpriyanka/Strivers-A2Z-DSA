class Solution {
public:
    int myAtoi(string s) {
       int i=0;
        int n=s.size();
        long result=0;

        //handle whitespace
        while(i<n && s[i]==' ')
        {
            i++;
        } 

        //handle sign 
        int sign=1;
        if(i<n &&( s[i]=='-'|| s[i]=='+'))
        {
            if(s[i]=='-')
            {
                sign=-1;
            }
            else{
                sign=1;
            }
            i++;
        }

        //handle digits

        while(i<n && isdigit(s[i])){
             result = result*10+(s[i]-'0');
             if(sign==1 && result>INT_MAX){
                return INT_MAX;
             }
             if(sign==-1 && -result<INT_MIN)
             {
                return INT_MIN;
             }

             i++;
        }
        return (int)(sign*result);
    }
};

//using recursion
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        long result = 0;

        // Handle whitespace
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Handle sign
        int sign = 1;
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') {
                sign = -1;
            } else {
                sign = 1;
            }
            i++;
        }

       
        result = parseDigits(s, i, s.size(), result, sign);

        return (int)(sign * result);
    }

    long parseDigits(string &s, int i, int n, long result, int sign) {
        if (i >= n || !isdigit(s[i])) return result;

        result = result * 10 + (s[i] - '0');

        
        if (sign == 1 && result > INT_MAX) return INT_MAX;
        if (sign == -1 && -result < INT_MIN) return INT_MIN;

        return parseDigits(s, i + 1, n, result, sign);
    }
};
