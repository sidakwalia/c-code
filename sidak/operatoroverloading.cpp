#include<iostream>
using namespace std;

class Complex{
private:
	int real,img;

public:
	Complex(int r=0,int i=0){
		real=r;
		img=i;
	}
	void print(){
		cout<<real<<"+i"<<img<<endl;

	}


	friend Complex operator + (Complex const &,Complex const &);
};

 Complex operator + (Complex const &c1,Complex const &c2 ){
	return Complex(c1.real + c2.real,c1.img + c2.img);
}

int main(){
	Complex c1(10,5),c2(12,3);
	Complex c3=c1+c2;
	c3.print();
	return 0;
}