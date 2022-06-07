#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cin>>n;
    while (i<=n-1)
    {
        if (n%i==0)
        {
            cout<<"Not Prime";
            return 0;
        }
        if (i==n)
        {
            cout<<"Prime";
        }
        i=i+1;
        
        
    }
    return 0;
    
}