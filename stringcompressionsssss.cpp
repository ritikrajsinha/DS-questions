#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int n = s.size();
    sort(s.begin(), s.begin() + n);
    int i = 0, max_cnt = 0;
    char good;

    
    while (i < n)
    {
        int cnt = 0;
        char cur = s[i];
        while (i < n && s[i] == cur)
        {
            i++;
            cnt++;
        }

        if (cnt >= max_cnt)
        {
            max_cnt = cnt;
            good = cur;
        }
    }
    
    cout << good << endl;
    

    return 0;
}