#include<iostream>
using namespace std;

int main()
{
    int n1,n2,i=1,count=1;
    cin>>n1>>n2;

    while(i<=n1)
    {
        if(((3*count)+2)%n2!=0)
         {
          cout<<(3*count)+2<<endl;
          i++;
         }

        count ++;   
    }

   return 0; 
}