#include<bits/stdc++.h>
using namespace std;
#define no cout<<"No.\n";
#define yes cout<<"yes.\n";

int main()
{
    int t,n,cnt=0;
    cin>>t;
    while (t--)
    {
        cin>>n;
        //-------type-1-------//
        /*
        cnt=0;
        if( (n&(n-1))==0 )
        {
            while (n>0)
            {
                cnt++;
                n=n>>1;
            }
            if((cnt&1)==1)
            {
                cout<<"power of 4.\n";
            }else{
                cout<<"Not power of 4.\n";
            }
        }
        else
         cout<<"Not power of 4.\n";*/
    
       if(n<0)
       {
           no;
       }
       else if(__builtin_popcount(n)==1) //count number of set bit
       {
           cnt = floor(log2(n)+1); //count nmuber of binary digits
           if(cnt&1){
               yes;
           }
           else
           {
               no;
           }
           
       }
       else
       {
           no;
       }
       
       
    
    }
    
}