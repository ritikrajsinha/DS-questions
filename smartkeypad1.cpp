#include<iostream>
using namespace std;
char keys[10][10]={" ","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
void phonekeypad(char in[],int i,char out[],int j,int &co){
	// base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;//AD
        co++;
		return;
	}



	// recursive case
	int digit=in[i]-'0';//2 //3

	for(int k=0;keys[digit][k]!='\0';k++){//3
			out[j]=keys[digit][k];
		phonekeypad(in,i+1,out,j+1,co);
		out[j]=' ';


	}



}


int main(){
	char in[1000],out[1000];
	cin>>in;//"23"
    int co=0;
	phonekeypad(in,0,out,0,co);
    cout<<endl;
    cout<<co;

	



	return 0;
}