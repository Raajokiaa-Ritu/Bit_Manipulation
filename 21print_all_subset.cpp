#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,k,i;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)cin>>a[i];
    
    t = 1<<n;
    for(k=1;k<t;k++)
    {
        for(i=0;i<n;i++)
        {
            if((k&(1<<i)))
               cout<<a[i]<<' ';
        }
        cout<<endl;
    }
}