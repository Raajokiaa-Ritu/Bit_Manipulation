#include<bits/stdc++.h>
using namespace std;
int pre(int p)
{
        int cnt=0;
        //-------type-2----------
        while(p>0)
        {
            cnt++;
            p=p&(p-1);
        }
        //cout<<"total:"<<cnt<<endl;
        return cnt;
}
int main()
{
    int t,n,a,b,f,i,x;
    cin>>t;
    while (t--)
    {
        f=0;
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
            if((i&1)==0 && i<b)
            {
                f+= 2*pre(i)+1;
                i++;
                continue;
            }
            f+=pre(i);
        }
        cout<<f<<endl;

    }
    


}