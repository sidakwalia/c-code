#include<iostream>
using namespace std;

void swap(int *x,int*y)

{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void sortInwave(int arr[],int n)
{
	for(int i=0;i<n-1;i+=2)
	swap(&arr[i],&arr[i+1]);
	
}
}


	int main()
	{


	
	int arr={2,5,4,7,8,16};
	int n=sizeof (arr)/sizeof(arr[0]);
	Sort Inwave(arr,n);
	for (int i=0;i<n;i++)

	cout<<"arr[i]"<<"  ";
	return 0;
	}

	