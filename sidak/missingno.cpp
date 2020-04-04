#include<iostream>
using namespace std;
int main(){
	int i,total,sum=0,x,n;
	int a[]={1,2,4,5,6,7};
  n = (sizeof(a) + 4)/sizeof(a[0]) ;
  cout<<n<<endl;

total=n*(n+1)/2;
cout<<total<<endl;
for(i=0;i<n-1;i++){
	sum=a[i]+sum;
}
cout<<sum;
x=total-sum;
cout<<"missing no is"<<x<<endl;

    
}