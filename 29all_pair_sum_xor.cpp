#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,sum=0;
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++)cin>>a[i];

        for(i=0;i<n;i++)
        {
          sum+=(a[i]+a[i]);
        }
        cout<<sum<<endl;
        a.clear();

    }
    

}