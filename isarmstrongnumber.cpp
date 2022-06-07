#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x, c, sum = 0,temp;
    temp=n;
    while (n > 0)
    {
        x = n % 10;
        c = x * x * x;
        sum = sum + c;
        n = n / 10;
        
        }
        n=temp;

        if (temp == sum)
        {
            cout<<"true";
        }
        else
        {
            cout<<"false";
        }
        
         
     
    
    return 0;
}
