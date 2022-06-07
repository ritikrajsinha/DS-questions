#include <iostream>
using namespace std;
int main() {
int n,m,lcm; 
cin>>n>>m; 
int ans =0;

int c = min(n,m);

for(int i =1;i<=c;i++) {
    if(n%i==0 && m%i==0) {
        ans = i;
    }
} cout<< ans;
return 0;
}