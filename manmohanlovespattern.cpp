#include <iostream>
using namespace std;
int main()
{
int n,i,j;
cin>>n;
cout<<"1"<<endl;// loop ke andar kabhi constant term nahi dalna jo tumhe humesha code mein chahiye.

for (int i = 2; i <=n; i++)

{
    
    for (int j = 1; j<=i ; j++)
    {
        if (j==i || j==1)

        {
            cout<< i-1;
        }
        else
        {
            cout<<"0";
        }
        
        
    }cout<<endl;
    

}

    return 0;
}