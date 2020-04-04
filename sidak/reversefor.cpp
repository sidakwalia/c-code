#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int reveresdNo=0;
	for(;N>0;N=N/10)
	{
		reveresdNo*=10;
		reveresdNo+=N%10;

	}
	cout<<"reveresdNo"<<endl;
}