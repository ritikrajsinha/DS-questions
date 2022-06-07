#include<iostream>
using namespace std;
bool isarraysorted(int arr[],int n){

    //base case

if (n==1)
{
    return true;
}



    //recursive case
    if (arr[0]<=arr[1]&&isarraysorted(arr+1,n-1) )
    {
        return true;
    }
    

return false;



}
int main(){

int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
 cin>>arr[i];
}

if(isarraysorted(arr,n)){


    cout<<"true";
}
else
{
    cout<<"false";
}





    return 0;
}