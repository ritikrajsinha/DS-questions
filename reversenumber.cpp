#include<iostream>
// Take N as input, Calculate it's reverse also Print the reverse.
// Sample Input
// 123456789
// Sample Output
// 987654321

using namespace std;
int main(){
    int x,y=0,r;
    cin>>x;
    while (x!=0)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;

    }cout<<y;
    
}