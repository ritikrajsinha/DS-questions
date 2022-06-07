#include <bits/stdc++.h>
using namespace std;

vector<string>v;
void subsequences(char in[], int i, char out[], int j)
{
    //base case
    if (in[i] == '\0')
    {
        out[j] = '\0';
        v.push_back(out);
 
        return;
    }

    //recursive case

    //without a
subsequences(in, i + 1, out, j);
    //with a
    out[j] = in[i];
    subsequences(in, i + 1, out, j + 1);
    
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        v.clear();
    char in[100000];
    cin >> in;
    char out[100000];
    subsequences(in, 0, out, 0);
    sort(v.begin(),v.end());
    for(auto i:v)
    {
       cout<<i<<endl;
    }
    }
    

    return 0;
}