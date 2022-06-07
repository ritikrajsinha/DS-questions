#include<iostream>
using namespace std;
void mergetwosortedarrays(int a[],int s,int e){
int mid=(s+e)/2;
int i=s;
int j=mid+1;
int temp[100000];
int k=s;
while (i<=mid&&j<=e)
{
    /* code */
if (a[i]<a[j])
{
    temp[k]=a[i];
    i++;
    k++;
}
else
{
    temp[k]=a[j];
    j++;
    k++;
}
}
while (i<=mid)
{
    temp[k]=a[i];
    i++;
    k++;
}
while (j<=e)
{
    temp[k]=a[j];
    j++;
    k++;
}

for (int i = s; i <=e ; i++)
{
    a[i]=temp[i];
}







}
void mergesort(int arr[],int s,int e){

    //base case
    if (s>=e)
    {
        return;
    }
    


    //recursive case
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    mergetwosortedarrays(arr,s,e);






}
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
mergesort(arr,0,n-1);

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}










    return 0;
}