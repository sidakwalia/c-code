#include<iostream>
using namespace std;
int main()
{ int N;
cin>>N;
int curNo=2;
while(curNo<=N)
{
	bool isPrime=true;
	int div =2;
	while(div<curNo)
	{ if(curNo %div==0){
	isPrime=false;
	break;
	}
	++div;
	}
if (isPrime==true){
	cout<<curNo<<" ";
}
++curNo;


}
}