#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}	



int main(){
	int arr[]={2,0,122,43,65};

	int n=sizeof(arr)/sizeof(arr[0]);

	int x=122;

	

 int result = linearSearch(arr,n,x); 
if(result==-1){
	cout<<"element not found"<<endl;}
	else
		cout<<"element is found at "<<result<<" position"<<endl;
    return 0; 
}
