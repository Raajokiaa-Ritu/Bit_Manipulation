#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,bit,i,m;
    cin>>t;
    while (t--)
    {
        cin>>n;
        bit = floor(log2(n)+1);
        /*---type-1-----//
        int ans = n^ ( (1<<bit)-1);
        cout<<ans<<endl;
        //but type-1 overflows for 32bit int*/
        //----type-2----//
        // here bit>=1
        int x = 1<<(bit-1);
        x = x|(x-1);
        int ans= n^x;
        cout<<ans<<endl;


    }
    
}