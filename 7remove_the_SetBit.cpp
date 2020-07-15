#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,x,f;
    cin>>t;
    while (t--)
    {
        cin>>n>>i;
        // if the i-th bit izz set(1) the make it 0
        n &= ~(1<<i);
        cout<<n<<endl;
    }
    
}