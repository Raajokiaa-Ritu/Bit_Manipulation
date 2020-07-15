#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,t;
    cin>>t;
    while(t--)
    {   
        cnt=0;
        cin>>n;
        //----type-1----//
        // for this formula n must be n>=1
        int ans = floor( log2(n)+1 ); // binary log2, decimal log10
        cout<<"total bits:"<<ans<<endl;
        //----type-2----//
        while(n>0)
        {
           cnt++;
            n=n>>1;
        }
        cout<<"total bits:"<<cnt<<endl;
    }
}