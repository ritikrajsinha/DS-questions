#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=-1,b=1,sum=0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            sum=a+b;
            a=b;
            b=sum;
            cout<<sum<<"\t";
        }cout<<endl;
        
    }
    
    

    return 0;
}
