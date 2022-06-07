#include<iostream>
using namespace std;
int main(){
 string s;
 cin>>s;
 int n=s.length();
 int c=1;
 int i=0;
 while(i<n)
 {
    int j=i+1;
    while(j<n){ 

      if (s[i]==s[j])
      {
          c++;
      }
	  else{ // add this else case, as we dont want to increment
            // the count (c) after we reached the first unequal character
		  break;
	  }
      
      
     j++;

    }
    if (c==1)
    {
        cout<<s[i];
    }
    else
    {
        cout<<s[i]<<c;
    }
    
    
    c=1;
    i=j;

    // no need of this statement as j is already on the next unequal character
    // i++;
    
 }
 











    return 0;
}