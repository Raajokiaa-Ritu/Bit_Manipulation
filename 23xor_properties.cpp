#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"xor properties:\n";
    /*properties: 
      1. A^0 = A
      2. A^A = 0
      3. A^B = B^A
      4. A+B = (A^B) + 2*(A&B)
    */

    int t,n,i;
    cin>>t;
    while (t--)
    {
        cin>>n>>i;
        cout<<"xor:"<<(n^i)<<endl;
    }
    
}