/////bubble sort using recursion


#include<iostream>
using namespace std;
void bubblesort(int ar[],int be,int en)	{
if (be>en)  return;




bubblesort(arr,be+1,en);
if(arr[be]>arr[be+1]> arr[be+1])
{ swap(arr[be],arr[be+1]);
bubblesort(arr,be+1,en);
 
}



}


int main(){ int arr[10];
	int n;
	cin>>n;
	inputArr(arr,n);

}