#include<bits/stdc++.h>
using namespace std;
string moveallxtoend(string s,int l,int i){


    //base case
if (i==l-1)
{
    return " ";
}


    //recursive case
    char c='x';
    if (s[i]==c)

    {
        swap(s[i],c);
    }
    
     return moveallxtoend(s,l,i+1);



}
int main(){

string s;
cin>>s;
int l=s.length();
cout<<moveallxtoend(s,l,0);







    return 0;
}