#include<iostream>
using namespace std;


int insertsort(int arr[],int n,int key){
	arr[n+1]= key;
		return arr[];}
	



int main(){

	int arr[]={32,11,2,332,1,131};

	//int capacity=sizeof(arr)/sizeof(arr[0]);

	int n=6;
	int i, key=26;
cout<<"Before insertion"<<endl;


for(i=0;i<n;i++){
	cout<<arr[i]<<endl;
}
insertsort(arr,n,key);
cout<<"After swappping"<<endl;

for(i=0;i<n;i++){
	cout<<arr[i]<<endl;
}


return 0;
}