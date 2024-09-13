
#include<bits/stdc++.h> 
using namespace std;


class Solution{
public:
    int evenlyDivides(int N){
        int count=0;
        int original=N;
        while(N>0)
        {
            int value=N%10;//1
            if(value!=0 && original%value==0)
            {
                count++;
            }
            N=N/10;
        }
        return count;
    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
