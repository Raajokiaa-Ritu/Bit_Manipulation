#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>i; //find 2^n;
        cout<<"2^"<<i<<": "<<(n<<(i-1))<<endl;
    
    }
    
}