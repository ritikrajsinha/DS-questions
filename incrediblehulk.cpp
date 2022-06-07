#include<iostream>
using namespace std;
int main(){


int t;
cin>>t;

while (t--)
{
    long long int n;
    cin>>n;//3--->0011
    int c=0;
    while (n>0)
    {
        if (n&1==1)
     {
         c++;
         
     }
     n=n>>1;
    }
     cout<<c<<endl;
     
    


}












    return 0;
}