#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int mindist(int arr[],int n,int x,int y)
{
	int i,j;
	int mindist=INT_MAX;

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if( (x==arr[i]&& y=arr[j]||y==arr[i] && x==arr[j]) && mindist>abs(i-j) ){
				mindist=abs(i-j);
			}
		}
	}return mindist;
}

int main()  
{ 
    int arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int x = 3; 
    int y = 6; 
  
    cout << "Minimum distance between " << x <<  
                    " and " << y << " is " <<  
                    mindist(arr, n, x, y) << endl; 
} 