class Solution {
public:
    int getLucky(string s, int k) {
          int n=s.length();
          int sum=0;
          for(int i=0;i<n;i++)
          {
             int value=s[i]-'a'+1;
               while(value){
                sum=sum+value%10;
                value=value/10;

               }
               
          }

          for(int i=1;i<k;i++)
          {
            int temp=0;
            while(sum){
               
               temp=temp+sum%10;
               sum=sum/10;
            }
               sum=temp;
          }


          return sum;

    }
};