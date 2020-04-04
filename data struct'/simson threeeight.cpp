#include<iostream>
#include<math.h>
using namespace std;


float f(float x){
	return 1/1+pow(x,2);
}
int main(){
	float h,b,a,n,s,s1,f(x1),f(x2);
cout<<"Enter the values of a and b"<<endl;
cin>>a>>b;
cout<<"Enter value of n"<<endl;
cin>>n;
	h=b-a/n;


	for(int i=1;i<n;i++){
		if(i%3==0){float sum=0;
f(x1)=sum;
		}
		else
			f(x1)=sum+3f(i);
	}
for(int j=1;j<n;j++){
	if(i%3==0){
		float sum2=0;
		f(x2)=sum+2f(i);
	}
}

float total=3*(h/8)*(s+f(x1)+f(x2)+s1);
cout<<floattotal<<endl;
}