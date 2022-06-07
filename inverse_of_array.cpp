#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int ans[n];
for (int i = 0; i < n; i++)
{
    int index=arr[i];
    int kya_value_hogi=i;
    ans[index]=kya_value_hogi;
}

for (int i = 0; i < n; i++)
{
    cout<<ans[i];
}





    return 0;
}