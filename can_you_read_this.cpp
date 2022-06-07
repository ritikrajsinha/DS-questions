#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
cin>>s;
int i= 0;
int n=s.length();
while (i<n)
{
    if (s[i]>='A' && s[i]<='Z')
    {
        cout<<s[i];
    }
    i++;
    while (islower(s[i]))
    {
    cout<<s[i];
    i++;
    }
    
    cout<<endl;
    
}











    return 0;
}