#include <bits/stdc++.h>
using namespace std;
void recursive_fn(int idx, int n, int A[], int sum, int &cnt)
{
    /*base*/
    if (idx == n)
    {
        if (sum == 0)
        {
            
            cnt++;
        }
        return;
    }
   
    /*recursive*/
    recursive_fn(idx + 1, n, A, sum, cnt); // exclude

    recursive_fn(idx + 1, n, A, sum + A[idx], cnt); // include
}

void test_case()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    int cnt = 0;
    recursive_fn(0, n, A, 0, cnt);

    if (cnt >= 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        test_case();
    }

    return 0;
}