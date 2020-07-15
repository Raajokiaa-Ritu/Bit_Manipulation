#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    set bit  -> 1
    reset bit-> 0
    1. all() -return true if all bits are set
    2. any() -return true if any bits is set
    3. none() -return true if all bits are reset
    4. count() - count number of set bits
    5. set() - set all bits/ at position k
    6. reset() - reset all bits/at position k
    7. flip() - toggle/alternate all bits/at position k
    8. test() -return true if the bit at position p is set
    9. size() -return number of bit in the bitset
    10. operator[ ] -insert bit
    11. to_ullong()/to_ulong() -returns the decimal value of the binary number(101->5 etc.)
    12. to_string() - convert bitset to string

    we can perform &, |, ^, ~, <<, >> of two bitset.
    */

   bitset<8>x;
   bitset<8>p;
   cout<<"enter an 8-bit binary number: ";
   cin>>x; //00001010 -->10
   cout<<"bitset: "<<x<<endl<<boolalpha;
   cout<<"check all bits are set/not   : "<<x.all()<<endl; 
   cout<<"check any bits are set/not   : "<<x.any()<<endl;
   cout<<"check all bits are reset/not : "<<x.none()<<endl;
   cout<<"total set bit     : "<<x.count()<<endl;
   cout<<"set all bit       : "<<x.set()<<endl;
   cout<<"set 0 at position 2 : "<<x.set(2,0)<<endl;
   cout<<"reset at position 2 : "<<x.reset(2)<<endl;
   cout<<"reset all bit     : "<<x.reset()<<endl;
   cout<<"flip all bit     : "<<x.flip()<<endl;
   cout<<"flip at position : "<<x.flip(2)<<endl;
   cout<<"test set or not  : "<<x.test(5)<<endl; //true //000011101
   cout<<"number of bit    : "<<x.size()<<endl;
   x[1]=0;
   cout<<"insert 0 at position 1: "<<x<<endl;
   p=x; //copy
   cout<<"binary-->decimal    : "<<x.to_ulong()<<endl;
   int num = x.to_ulong();//decimal value chole ashlo
   cout<<"decimal --> binary  : "<< bitset<8>(num)<<endl;
   
   cout<<"bitset --> string   :"<<p.to_string()<<endl;

   

}