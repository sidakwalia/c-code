#include<iostream>
using namespace std;

void printRev(int arr[],int si,int ei){
	if(si>ei ) return;
	cout<<arr[ei]<<" ";
	printRev(arr,si,ei+1);
}

int main(){
	int n;
	cin>>n;
	inputArr(arr,n);
	printRev(arr,0,n-1)
}