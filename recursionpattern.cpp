#include <iostream>
using namespace std;
void printtriangle(int n)
{

    //base case
    if (n == 0)
    {
        return;
    }

    //recursive case
    printtriangle(n - 1);
    for (int i = 1; i <= n; i++)
    {
        cout << "*"
             << "    ";
    }
    cout<<endl;
}
int main()
{

    int n;
    cin >> n; //4
    printtriangle(n);

    return 0;
}