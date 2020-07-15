#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x,f;
    cin>>t;
    while (t--)
    {
        cin>>n>>x;
        f=n^x;
        if(f==0)cout<<"equal!\n";
        else cout<<"not equal.\n";
    }
    
}