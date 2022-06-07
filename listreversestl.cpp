#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    int n;
    cin>>n;
    int no;

    for (int i = 0; i < n; i++)
    {
        cin>>no;
        l.push_back(no);
    }
    l.reverse();
    for (auto x:l)
    {
        cout<<x<<" ";
    }
    return 0;
}