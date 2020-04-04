#include<iostream>
using namespace std;

int main(){
	int a;
	try{cin>>a;

	
	if(a==0){
		throw a;
	}
}
catch(int a){
	cout<<"division by zero allowed"<<endl;
}
return 0;}
