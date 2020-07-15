#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,f;
    cin>>t;
    while(t--)
    {
      cin>>n>>i;
      f=(1<<i);
      if(n&f)
        cout<<"set.\n";
      else cout<<"reset.\n";
    }
}