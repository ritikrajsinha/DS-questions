#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    for (int i = n-1; i >=0; i--)
    {
        if (arr[i] == m)
        {
            cout << i;
            return 0;
        
        }
        
    }
    cout<<"-1";

    return 0;
}