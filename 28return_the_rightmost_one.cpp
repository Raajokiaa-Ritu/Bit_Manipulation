#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    //int ans = x ^ (x & (x - 1));
    int ans =  x & (-x);

    cout<<ans<<endl;


}
