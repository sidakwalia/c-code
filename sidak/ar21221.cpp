#include<iostream>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<n;
   int i;
int oddsum=0,evensum=0;

for(i=0;i<n-1;i++){
	if(arr[i]%2==0){
		evensum=evensum+arr[i];
	
	}
	else{
		oddsum=oddsum+arr[i];
	}
}
	cout<<"evensum"<<evensum<<endl;

	cout<<"oddsum"<<oddsum<<endl;

	return 0;
}





