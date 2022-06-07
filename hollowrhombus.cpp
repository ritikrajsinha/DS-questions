#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=(n-i); j++)
        {
            cout<<" ";
        }
        if (i==1 || i==n)
        {
            for (int k = n; k >=1 ; k--)
            {
                cout<<"*";
            }
            
        }
        else
        {
            cout<<"*";
            for (int m = 1; m <= n-2; m++)
            {
                cout<<" ";
            }
            cout<<"*";
            
        }
        
        cout<<endl;
    }

    

    return 0;
}