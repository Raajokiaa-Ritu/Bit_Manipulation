#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>i;
        ///------ left shift-----//
        cout<<"left : "<<n<<"<<"<<i<<" = "<<(n<<i)<<endl;
        ///------ right shift----//
        cout<<"right: "<<n<<">>"<<i<<" = "<<(n>>i)<<endl;
    }
}