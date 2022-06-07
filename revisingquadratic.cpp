#include<iostream>
#include<math.h>
using namespace std;
 int main(int argc, char const *argv[])
 {
     int a,b,c,d;
     cin>>a>>b>>c;
      d=(b*b)-(4*a*c);
      if (d>0)
      {
          cout<<"Real and Distinct"<<endl;
          int r1=(-b + sqrt(d))/(2*a);
          int r2=(-b - sqrt(d))/(2*a);
          cout<<r2<<" "<<r1;
      }
      else if (d==0)
      {
        cout<<"Real and Equal "<<endl;
          int r1=(-b + sqrt(d))/(2*a);
          int r2=(-b - sqrt(d))/(2*a);
          cout<<r2<<" "<<r1;

      }
      else{
          cout<<"Imaginary";
      }
      

     return 0;
 }
 