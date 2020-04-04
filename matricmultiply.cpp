#include<iostream>
using namespace std;

int main(){
	int m,n,p,q,k;

	cout<<"Enter rows and column of matrix 1"<<endl;
	cin>>m>>n;

	cout<<"Enter rows and column of matrix 2"<<endl;
	cin>>p>>q;

	if(n!=p){
		cout<<"matrix cannot be multiplied"<<endl;
	}
	else{
		int A[100][100],B[100][100],C[100][100];

		cout<<"Enter elements of matrix 1 "<<endl;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>A[i][j];
			}
		}

		cout<<"Elements of matrix 2"<<endl;
		for(int i=0;i<p;i++){
			for(int j=0;j<q;j++){
				cin>>A[i][j];
			}
		}

		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				for(k=0;k<n;k++){
					C[i][k]+=A[i][k]*B[k][j];
				}
			}
		}


		cout<<"Resultant matrix is"<<endl;

		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				cout<<C[i][j]<<"\t";
				if(j==q-1){
				cout<<endl;}
			}
		}



	}
	return 0;
}
