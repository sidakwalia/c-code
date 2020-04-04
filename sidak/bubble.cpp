#include<stdio.h>
using namespace std;

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubblesort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}

	void printarray(int arr[],int n) {
		for(i=0;i<n-1;i++){
			cout<<"array is"<<arr[i]<<endl;
		}
}

		int main(){
			int arr[]={23,2,11,34,1,123};
			int n=sizeof(arr)/sizeof(arr[0]);

			bubblesort(arr,n);
			printarray(arr,n);
			return 0;}
		}
	}
}
