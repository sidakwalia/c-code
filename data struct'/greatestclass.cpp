#include<iostream>
using namespace std;


class student{
	private:int a;

	public: friend void get(student);
};

void get(student s1){
	s1.a=5;
	cout<<s1.a<<endl;
}
int main(){
	student s1;
	get(s1);
	return 0;
}