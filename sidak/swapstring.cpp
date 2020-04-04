#include<iostream>
#include<string.h>
using namespace std;

void swap(int *str1,int *str2){
	int temp=*str1;
	*str1=*str2;
	*str2=temp;

}

int main(){
	char str1="isasaas";
	char str2="saas";
	swap(str1,str2);
	cout<<"strings are"<<swap(str1,str2)<<endl;
	return 0;
}

