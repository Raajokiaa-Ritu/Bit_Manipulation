#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b,i,f,x,j;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        f=0;
        for(i=a;i<=b;i++)
        {
            for(j=i+1;j<=b;j++)
            {
                f = max(f, (i^j));
            }
        }
        cout<<f<<endl;
    }
    


}