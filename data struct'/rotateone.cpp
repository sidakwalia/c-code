#include<iostream>
using namespace std;

int rotate(int arr[],int n){
	int x=arr[n-1],i;
	for(int i=n-1;0<i;i--){
		arr[i] = arr[i - 1];  
    arr[0] = x; 
	}
}



int main(){
	int arr[]={1,2,3,4,5};

	int n=sizeof(arr)/sizeof(arr[0]);
cout<<"First array is"<<endl;
for(int i=0;i<n;i++)
cout<<arr[i]<<endl;

rotate(arr,n);

cout<<"AFTER rotation"<<endl;
for(int i=0;i<n;i++)
cout<<arr[i]<<endl;

return 0;


}