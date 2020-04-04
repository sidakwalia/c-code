#include<iostream>
using namespace std;

int linearSearch(int arr[],int n){
int i;
	for( i=0;i<n;i++){
		if(arr[i]==i){
			return i;
		}
	}return -1;
}


int main(){
	int arr[]={1,2,4,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
linearSearch(arr,n);
cout<<"linearSearch"<<linearSearch(arr,n)<<endl;
return 0;
}
