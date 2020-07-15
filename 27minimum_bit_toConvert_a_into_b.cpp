#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,f,x,a,b;

    //  minimum number of bit to convert a -> b .

    cin>>t;
    while (t--)
    {
        f=0,n=0;
        cin>>a>>b; //  a<=b
        n = a^b;
    
        while(n>0)
        {
            f++;
            n=n&(n-1);
        }
        cout<<f<<endl;
    }
    
}