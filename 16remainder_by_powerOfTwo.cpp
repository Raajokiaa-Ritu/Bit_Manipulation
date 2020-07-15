#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,f,x;
    cin>>t;
    while (t--)
    {
        //output: x%f ( here f must be power of two:2^n)
        // or make f as 2^n 
         cin>>x>>i;
         //f=2<<(i-1); //this 2^n
         //now x & (f-1)
        // n = x&(f-1);
         n=x&(i-1);
         if(n==0)
         cout<<"yes divisible: "<<n<<endl;
         else cout<<"not divisible.remainder:"<<n<<endl;
         

        
    }
    
}