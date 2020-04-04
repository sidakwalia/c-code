#include<iostream>

using namespace std;

void swap(int *xp,int *yp){
	int temp = *xp;
	 *xp= *yp;
	 *yp=temp; }

void selectionsort(int arr[],int n){
int i,j,min;

for(i=0;i<n-1;i++){
	min=arr[i];
	for(j=i+1;i<n-1;j++){
		if(arr[j]<arr[min]){
			min=j;
		}swap(&arr[min],arr[i]);}}

		void printarray(int arr[],int n){
			int i;
			for(i=0;i<n-1;i++){
				cout<<"print"<<arr[i]<<endl;
			}
		}

		int main() 
{ 
    int arr[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
   cout<<"Sorted array"<<endl;
    printArray(arr, n); 
    return 0; 
} 


	
