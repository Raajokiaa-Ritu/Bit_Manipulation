#include<bits/stdc++.h>
using namespace std;
int main()
{
    // if i-th bit = 0 make 1
    // if i-th bit = 1 make 0

    int t,n,i,f,ans;
    cin>>t;
    while (t--)
    {
        cin>>n;
        f = 1<<i;
        ans = n^f;
        cout<<ans<<endl;

    }
    
}