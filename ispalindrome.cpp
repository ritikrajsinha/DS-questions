#include <iostream>
using namespace std;
bool ispallindrome(int *arr, int n, int s, int e)
{
    //base case
    if (s > e)
    {
        return false;
    }

    //recursive case//12221
    if (arr[s] == arr[n - 1])
    {
        return true;
    }

    return ispallindrome(arr, n, s + 1, e - 1);
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (ispallindrome(arr, n, 0, n - 1))
    {

        cout << "true";
    }

    else
    {
        cout << "false";
    }

    return 0;
}