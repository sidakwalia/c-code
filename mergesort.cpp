#include<iostream>
using namespace std;


void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	
	*b=temp;
}

int merge(int arr[],int l,int mid,int h){
	int i,j,k;

	int n1,n2;
	n1=mid-l+1;
	n2=h-mid;

	int L[n1],R[n2];

	for(i=0;i<n1;i++){
		L[i]=arr[l+i];
	}

	for(j=0;j<n2;j++){
		R[j]=arr[mid+1+j];
	}

	i=0;
	j=0;
	k=l;

	while(i<n1 && j<n2){
		if(L[i]<R[j]){
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=R[j];
			j++;
		}
k++;

	}

while(i<n1){
	arr[k]=L[i];
	i++;
	k++;
}

while(j<n2){
	arr[k]=R[j];
	j++;k++;
}

}


int mergesort(int arr[],int l,int h){
	if(h>l){
		int mid=(l+h)/2;

		mergesort(arr,l,mid);
		mergesort(arr,mid+1,h);

		merge(arr,l,mid,h);
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


	mergesort(arr,0,n-1);
	printarray(arr,n);
	return 0;
}