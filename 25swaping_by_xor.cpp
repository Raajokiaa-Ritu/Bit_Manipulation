#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        x = x^y;
        y = x^y;
        x = x^y;
        cout<<x<<' '<<y<<endl;
    }
    
}