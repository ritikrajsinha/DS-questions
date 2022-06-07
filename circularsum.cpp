#include<iostream>
using namespace std;
int main(){
	int t;
	int a[10000],b[10000];
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		
		int cs=0,ms=0,csum=0;


		for (int i = 0; i <n; ++i)
		{
			cin>>a[i];
			csum=csum+a[i];
			
			cs=cs+a[i];
			if(cs<0){
				cs=0;
			}
			ms=max(cs,ms);
			a[i]=(-a[i]);
			
		}

		int res1=ms;

		ms=0,cs=0;
		for (int i = 0; i <n; ++i)
		{
			cs=cs+b[i];
			if(cs<0){
				cs=0;
			}
			ms=max(cs,ms);
		}


		


		int res2=csum-(-ms);


		cout<<max(res2,res1)<<endl;





	}



	return 0;
}