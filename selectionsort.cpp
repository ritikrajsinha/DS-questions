#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int pos = 0; pos <= n - 2; pos++)
    {
        int min = pos;
        for (int j = (pos + 1); j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                 min = j;
            }

        }
            swap(arr[min], arr[pos]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<endl;
    }
    

    return 0;
}
