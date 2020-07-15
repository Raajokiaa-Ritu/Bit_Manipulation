#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,f;
    cin>>t;
    while(t--)
    {
        cin>>n; // n<= 10^10
        f=1;
        if(n&f)
        cout<<"odd.\n";
        else cout<<"even.\n";
    }
}