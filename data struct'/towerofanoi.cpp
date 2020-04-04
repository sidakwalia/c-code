#include<iostream>
    using namespace std;


    void towerOfHanoi(int n,char src,char dest,char helper ){
    	if(n==0) return;


    	towerOfHanoi(n-1,src,helper,dest);
    	cout<<"move "<<n<<" disc from"<<src<<"to"<<dest<<endl;

    	towerOfHanoi(n-1,helper,src,dest);
    }

    int main(){
    	int n;cin>>n;


    	towerOfHanoi(n,'A','B','C');

    	return 0;
    }