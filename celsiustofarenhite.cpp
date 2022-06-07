#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int min, max, step;
    cin>>min>>max>>step;
    
    while (min<=max){
        int c=(5/9.0)*(min-32);
        cout<<min<<" "<<c;
        cout<<endl;
        min=min+step;
    } 
        
    

    return 0;
}
