#include<iostream>
#include<bits/stdc++.h>
using namespace std;




void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	
	*b=temp;
}


int bubblesort(int arr[],int n){

	int i,j;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				swap(&arr[i],&arr[j]);
			}
		}
	}
}


void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}



int main(){
	int arr[]={3,21,12,31,1};

	int n=sizeof(arr)/sizeof(arr[0]);


	bubblesort(arr,n);
	printarray(arr,n);
	return 0;
}