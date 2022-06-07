#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"before sorting the array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for (int iter = 0; iter <= n - 2; iter++)

    {
        for (int j = 0; j <= n-2-iter; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    cout<<endl;
    cout<<"after sorting the array will be : ";
    for (int k = 0; k < n; k++)
    {
       cout<<arr[k]<<" ";
    }
    

    return 0;
}
