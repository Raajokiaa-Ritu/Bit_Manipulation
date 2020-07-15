#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,f,ans,x,sum;
    cin>>t;
    while (t--)
    {
        cin>>n>>i; //make set: i-th bit of n
        f=1<<i;
        ans = n|f;
        cout<<ans<<endl;
        
    }
    
}