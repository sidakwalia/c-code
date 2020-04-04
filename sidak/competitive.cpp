#include<iostream>
using namespace std;
void printArr(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
void sum(int arr[],int n){
if(n<3)
	return ;

	int first=arr[0];
		int second=arr[1];
	for(int i=0;i<n-2;i++){
	arr[i]=arr[i+1]+arr[i+2];
	 arr[n - 2] = arr[n - 1] + first; 
    arr[n - 1] = first + second; 

	
	printArr(arr,n);
	}
}


int main(){
	int arr[] = { 3,4,2,1,6}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    sum(arr,n);
return 0;}
