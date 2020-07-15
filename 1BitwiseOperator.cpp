#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        n = a&b;
        cout<<"and:"<<n<<endl;
        n = a|b;
        cout<<"or :"<<n<<endl;
        cout<<"not:"<<~a<<' '<<~b<<endl;
    }

}