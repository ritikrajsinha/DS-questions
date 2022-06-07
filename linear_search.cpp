#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int M;
    cin >> M;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == M)
        {
            cout << i;
            

            return 0;
        }
    }
    cout << "-1";

    return 0;
}
