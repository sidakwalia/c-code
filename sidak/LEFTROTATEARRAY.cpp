#include<iostream>
using namespace std;

void leftrotateone(int arr[],int n){
	int temp=arr[0],i;
	for(i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	

	arr[i]=temp;
}

void leftrotate(int arr[],int d,int n){
	for(int i=0;i<d;i++)
		leftrotateone(arr,n);
}

void printarray(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";}


int main(){
	int arr[]={2,11,1,12,32,0};

	int n=sizeof(arr)/sizeof(arr[0]);

	

	leftrotate(arr,2,n);

	printarray(arr,n);
	return 0;
}