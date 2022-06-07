#include<iostream>
using namespace std;
int uniqueno3 (int *arr,int n){

int freq[32]={0};
for (int i = 0; i < n; i++)
{
    int pos=0;
    int no=arr[i];

    while (no>0)
    {
    freq[pos]=freq[pos]+(no&1);
    no=no>>1;
    pos++;   
    }
}
    for (int i = 0; i < 32; i++)
    {
        freq[i]=freq[i]%3;
    }
    int m=1;
    int ans=0;
    for (int i = 0; i < 32; i++)
    {
        ans=ans + freq[i]*m;
        m=m<<1;
    }

    return ans;
    


}

int main(){

int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

cout<<uniqueno3(arr,n);




    return 0;
}