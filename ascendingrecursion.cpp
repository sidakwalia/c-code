#include<iostream>
using namespace std;
void numascending(int num){
	if(num==0) return;
	
	numascending(num-1);
	cout<<num<<" ";
}
int main()
{
	int num;
	cin>>num;
	numascending(num);
	return 0;



}