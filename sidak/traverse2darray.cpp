#include<iostream>
using namespace std;



int main(){
	int x[3][2]={{0,1},{2,4},{4,6}};

	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<"element at x["<<i<<"]["<<j<<"]:"<<endl;
			cout<<x[i][j]<<endl;
		}
	}
	
}