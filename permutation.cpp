#include <bits/stdc++.h>
using namespace std;\
string s;
vector<string>v;
void permutation(string temp, int i)
{
    //base case
    if (temp[i] == '\0')
    {
        if(temp<s)
       {
        v.push_back(temp);
       }
           
        return;
    }

    //recursive case
    for (int j = i; temp[j] != '\0'; j++)
    {
        swap(temp[i], temp[j]);
        permutation(temp, i + 1);
        swap(temp[i], temp[j]);
    }
}
    
int main()
{
    
    cin>>s;
    string temp=s;
    sort(temp.begin(),temp.end());
    permutation(temp, 0);
    sort(v.begin(),v.end());
    for(auto x:v){

        cout<<x<<endl;
        
    }

    return 0;
}