#include<iostream>
using namespace std;
int triangle(int n){
//base case

if (n==1)
{
    return 1;
}




//recursive case
return n+triangle(n-1);






}
int main(){
int n;
cin>>n;
cout<<triangle(n);//3








    return 0;
}