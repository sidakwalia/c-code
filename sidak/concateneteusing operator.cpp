#include<iostream>
#include<string.h>
using namespace std;


class String{
public:char s1[23],s2[32];


String(char str1[],char str2[]){

	strcpy(this->s1,str1);
	strcpy(this->s2,str2);

}
void operator+(){
	cout<<"concateneted"<<strcat(s1,s2);

};


int main(){
	char str1[]="sidak";
	char str2[]="walia";
	string a1(str1,str2);
	+a1;
	return 0;
}