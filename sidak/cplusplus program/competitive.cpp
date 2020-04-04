#include<iostream>
using namespace std;

int minoperations(int n,int m){
	if(m%n!=0)
		return -1;

	int minoperations=0;
	int q=m/n;

	while(q%2==0){
		q=q/2;
		minoperations++;
	}

	while(q%3==0){
		q=q/3;
		minoperations++;
	}
 if (q == 1) 
        return minOperations; 
  
    return -1; 
} 

int main(){
	int n=120,m=51830;
	cout<<minoperations(m,n)<<endl;

	return 0;}
}