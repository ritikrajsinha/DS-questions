#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);//it will sort the array
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i];
    // }
    cout<<arr[n-k];









    return 0;
}