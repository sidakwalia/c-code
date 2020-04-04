#include<iostream>
using namespace std;
int fib(int n){
	int prevfib=fib(n-1);
	int superprev=fib(n-2);
	int nth fib=prevfib+superprev;
}
	int main()
	{
	int n;
	cin>>n;
	cout<<fib(n);
	}