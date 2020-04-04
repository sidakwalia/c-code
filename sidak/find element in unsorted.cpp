#include<iostream>
using namespace std;

int search(int arr[],int n,int key){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			return i;}
		}

	
}

int main(){
	int arr[]={22,1,43,6,23};

	int n=sizeof(arr)/sizeof(arr[0]);
    int key=43;

    int position=search(arr,n,key);

    if(position==-1)
    	cout<<"element not found"<<endl;

    else
    	cout<<"element found at " <<  position+1;


    return 0;

}