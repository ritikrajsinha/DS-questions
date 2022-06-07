#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, rem;
    int decimal = 0;

    cout << "Enter the binary no: ";
    cin >> n;

    int i = 0;
    while (n > 0)
    {
        rem = n % 10;
        decimal = decimal + (rem * (pow(2, i)));
        n /= 10;
        i++;
    }

    cout << "Converted decimal number is: " << decimal << endl;
    if (decimal % 2 == 0)
    {
        cout << "accepted DFA";
    }
    else
    {
        cout << "not accepted DFA";
    }

    return 0;
}