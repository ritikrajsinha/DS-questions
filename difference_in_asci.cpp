#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n - 1; i++)
    {
        cout << s[i] << s[i + 1] - s[i];
    }
    cout << s[n - 1];

    return 0;
}