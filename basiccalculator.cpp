#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  char ch;
  cin >> ch;
  while (ch != 'x' && ch != 'X')
  {
    if (ch == '*')
    {
      int n1, n2;
      cin >> n1 >> n2;
      cout << n1 * n2 << endl;
    }
    else if (ch == '+')
    {
      int n1, n2;
      cin >> n1 >> n2;
      cout << n1 + n2 << endl;
    }
    else if (ch == '-')
    {
      int n1, n2;
      cin >> n1 >> n2;
      cout << n1 - n2 << endl;
    }
    else if (ch == '/')
    {
      int n1, n2;
      cin >> n1 >> n2;
      cout << n1 / n2 << endl;
    }
    else if (ch == '%')
    {
      int n1, n2;
      cin >> n1 >> n2;
      cout << n1 % n2 << endl;
    }
    else
    {
      cout << "Invalid operation. Try again.";
    }

    cin >> ch;
  }

  return 0;
}
