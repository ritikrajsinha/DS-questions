#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int m){
int s=0; 
int e=n-1;
while (s<=e)
{
int mid=(s+e)/2;

if (arr[mid]==m)
{
    return mid;
}
else if (arr[mid]<m)
{
    s=mid+1;
}

else 
{
    e=mid-1;
}

}

return -1;

}
int main(){
long long int n;
cin>>n;
 int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int m;
cin>>m;

cout<<binarysearch(arr,n,m);








    return 0;
}