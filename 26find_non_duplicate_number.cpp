#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,x=0;
    cin>>t;
    while (t--)
    {
        int n,arr[100];
        cin >> n; //n - odd number
        for(int i=0;i<n;i++) cin >> arr[i];

        int xo = 0;
        for(int i=0;i<n;i++) /// O(n*n)
        {
           xo=xo^arr[i];
        }
        
        cout << xo << "\n";
    }
    

}