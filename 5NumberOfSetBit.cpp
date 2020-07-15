#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,t;
    cin>>t;
    while(t--)
    {   
        cnt=0;
        cin>>n;
        int p=n;
        //-------type-1------
        while(n>0)
        {
            if((n&1)>0)
            {
                cnt++;
            }
            n=n>>1;
        }
        cout<<"total:"<<cnt<<endl;
        cnt=0;
        //-------type-2----------
        while(p>0)
        {
            cnt++;
            p=p&(p-1);
        }
        cout<<"total:"<<cnt<<endl;
    }
}