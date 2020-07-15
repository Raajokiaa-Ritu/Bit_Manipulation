#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,f;
    cin>>t;
    while (t--)
    {
        cin>>n;
        
        int bit= floor( log2(n)+1 );
        
        for (i = (bit-1); i>=0; i--)
        {
            if(n&(1<<i))cout<<1<<' ';
            else cout<<0<<' ';
        }
        
        cout<<endl;
        
    }
    
}