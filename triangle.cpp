                  /*   1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row,col,val;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" "<<"\t";
        }
        val=row;
        for(col=1;col<=row;col++)
        {
            cout<<val<<"\t";
            val++;
        }
        val=val-2;
        for(col=1;col<=row-1;col++)
        {
            cout<<val<<"\t";
             val--;
        }
        cout<<endl;
    }
}
                 