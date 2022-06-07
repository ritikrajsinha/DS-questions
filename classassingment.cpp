#include <bits/stdc++.h>
using namespace std;

long long int fib(long long int n)
{
    if (n==0||n==1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    // int testCases;
    // cin >> testCases;
    

    
    
        int n;
        cin >> n;
        cout  << fib(n+2) << endl;
    

    return 0;
}