#include<iostream>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
	int i,position;
	cin>>position;
	for(i=0;i<n-1;i++){
if(i==2){
	arr[i]=arr[i+1];
	}
	cout<<"array is"<<arr[i];

	return 0;
}
}