#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool myCompare(string a,string b)
{
   int i;
   for(int i=0;i<a.size() && i<b.size();i++)
   {
      if(a[i]<b[i]){
		  
		  return a<b;
	  }
	  if(a[i]>b[i]){


		  return a<b;
	  }

   }
   return a.size()>b.size();
}

int main()
{
int n;
string s[1000];
cin>>n;
for(int i=0;i<n;i++)
{
cin>>s[i];
}
sort(s,s+n,myCompare);
cout<<"after sorting we have: "<<endl;

for(int i=0;i<n;i++)
{
    
cout<<s[i]<<endl;
}
return 0;
}
