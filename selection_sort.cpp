#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n],b[n],c[2*n],k=0;
    for (int i = 0; i<n; i++,k++)
    {
        cin>>a[i];
        c[k]=a[i];
    }
     for (int i = 0; i<n; i++,k++)
    {
        cin>>b[i];
        c[k]=b[i];
    }
    sort(c,c+2*n);
    cout<<c[n-1];
   
return 0;
}
   //int c[2*n]=[a[i],b[i]]
