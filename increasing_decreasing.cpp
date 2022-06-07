#include<iostream>
using namespace std;

int main()
{
   int n,check=0,index;//5 1 2 3 4 5
   cin>>n;

   int arr[n];

   for(int i=0; i<n; i++)
    cin>>arr[i];

   for(index=0; index<n; index++)
    {
      if(arr[index+1]>=arr[index])
       {
        check=1;
        index++;
        break;
       } 
    }
   if(index==(n-1))//234
   {
    cout<<"true";
    return 0;
   }
   else
   if((index-1)==0)
   {
       for(int i=0; i<n; i++)
        if(arr[i]>=arr[i+1])
        {
            cout<<"false";
            return 0;
        }
   }

   while(index<n)
    {
        if(arr[index]>=arr[index+1])//5 1 2 3 4 5
       {
           check++;
           break;
       } 
       index++;
    } 

  if(check>1)
   cout<<"false";
  else cout<<"true";

  return 0; 
   
}