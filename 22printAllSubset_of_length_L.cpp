#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,k,i,l;
    cout<<"enter n and l: ";
    cin>>n>>l;
    int a[n+1];
    for(i=0;i<n;i++)cin>>a[i];
    
    t = 1<<n;
    for(k=1;k<t;k++)
    {
        if(__builtin_popcount(k)==l)
        {
        for(i=0;i<n;i++)
        {
            if((k&(1<<i)))
               cout<<a[i]<<' ';
        }
        cout<<endl;
        }
    }
}