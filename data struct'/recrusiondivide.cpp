#include<iostream>
using namespace std;

int sum(int n){

	if(n==0)return 0;
	else
		return(n%10 +sum(n/10));

}


int main(){
	int n=1234567;
	int result=sum(n);
	cout<<"the sum of digit is"<<result<<endl;
	return 0;
}