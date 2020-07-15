#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,f;
    cin>>t;
    f=t;
    cout<<"check 2^n or not:\n";
    while(t--)
    {
        cin>>n;
        if((n&(n-1))==0)
        cout<<"power of two.\n";
        else cout<<"no!\n";

    }
    cout<<"check (2^n -1) or not:\n";
    while(f--)
    {
        cin>>n;
        if((n&(n+1))==0)
        cout<<"yes\n";
        else cout<<"no\n";
    }
}