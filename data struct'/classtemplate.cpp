#include<iostream>
using namespace std;


template<class t1,calss t2>
class sample{
	t1 a;
	t2 b;
public:
	void getdata(){
		cout<<"a and b"<<endl;
		cin>>a>>b;
	}
	void display(){
		cout<<"displaying values"<<endl;
	}
};


int main(){
	sample<int,int> s1;
	cout<<"two integers"<<endl;
	s1.getdata();
	s1.display();
	return 0;
} 