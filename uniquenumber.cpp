#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int ans=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        ans=ans^arr[i];
    }
    cout<<ans;
    
    return 0;
}
