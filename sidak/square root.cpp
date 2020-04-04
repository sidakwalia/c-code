#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double num;
	int precision;
	cin>>num>>precision;

	double root=0.0;
	double inc=1.0;

// compute aall precisions
for(int p=0;p<=precision;++p)
{
	while(root*root<=num)
	{
	root=root+inc;
	}
	root=root-inc;
	inc=inc/10;
}
cout<<fixed;
cout<<setprecision(precision);
cout<<root;
return 0;



}