#include<iostream>
#include<list>
using namespace std;
int main(){
list<int>l;
long long int k;
long long int n;
cin>>k;
cin>>n;

int no;
for (int i = 0; i < (n*k); i++)
{
    cin>>no;
    l.push_back(no);
}
l.sort();
for (auto x:l)
{
    cout<<x<<" ";
}

return 0;

}