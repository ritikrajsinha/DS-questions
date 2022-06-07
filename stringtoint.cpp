#include<iostream>
using namespace std;
int stringtoint(string s,int l){
//base case
if (l==0)
{
    return 0;
}




//recursive case
int ldigit=s[l-1]-'0';
return stringtoint(s,l-1)*10+ldigit;

}
int main(){
string s;
cin>>s;
int l=s.length();
cout<<stringtoint(s,l);











    return 0;
}