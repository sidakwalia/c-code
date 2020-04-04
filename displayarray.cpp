#include<iostream>
using namespace std;

void printarray(int arr[],int si,int ei)
{
	if(si>ei) return ;
	cout <<arr[si]<<" ";

printarray(arr,si+1,ei);
}
int main()
{  
	int arr[100];
	int n;
	cin>>n;


	inputarr(arr,n);

	printarray(arr,0,n-1);

	return 0;
}
