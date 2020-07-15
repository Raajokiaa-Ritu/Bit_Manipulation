//left and right shift applications
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t,n,i,f,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>i;
        //-- output: n * (2^i) --//
        f=n<<i;
        cout<<f<<endl;

        //-- output: n / (2^i) --//
        x=n>>i;
        cout<<x<<endl;

    }
    
    

    

}