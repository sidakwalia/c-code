
#include<iostream>
using namespace std;
int main()
{
	void swap(int&,int&);
	int a=7,b=5;
	cout<<"Original values:";
	cout<<"a="<<a<<",b="<<b<<"\n";
	swap(a,b);
	cout<<"Swapped values \n";
	cout<<"a="<<a<<",b="<<b<<"\n";
	return 0 ;

}
void swap(int&x,int&y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
}
