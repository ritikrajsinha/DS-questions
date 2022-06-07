#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,i=2;
    cin>>a>>b;
    while (i<=(a*b))
    {
        if (i%a==0 && i%b==0 )
        {
            cout<<i;
            break;
        }
        i=i+1;
    }
    
    
    
    return 0;
}
