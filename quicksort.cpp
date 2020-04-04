#include<iostream>
using namespace std;


void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	
	*b=temp;
}




int partition(int arr[],int low,int high){

int i,j;
int pivot=arr[high];
i=low-1;


for(int j=low;j<high-1;j++){
if(arr[j]<pivot){
	i++;
	swap(&arr[i],&arr[j]);
}

}
 swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}




int quicksort(int arr[],int low, int high){
	if(high>low){
		int pi=partition(arr,low,high);


		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);

	}


}










void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}



int main(){
	int arr[]={3,21,12,31,24};

	int n=sizeof(arr)/sizeof(arr[0]);


	quicksort(arr,0,n-1);
	printarray(arr,n);
	return 0;
}