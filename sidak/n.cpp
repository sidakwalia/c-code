#include<iostream>
using namespace std;
int main()
{
	int N;
	int x;
	cin>>N;
	int cnt=0;
	const int inf=(int)1e6;
	int smallest=inf;
	int largest=-inf;
	int sum =0;
	cout<< inf;
	while(cnt<N){

	cin>>x;
	++cnt;
	if(x<smallest){
		smallest=x;
	}
	if (x>largest)
		{largest=x;

		}
		sum=sum+x;
	}
	cout<<"largest is"<<largest;
	cout<<"smallest is"<<smallest;
	double mean=double(sum/N);
	cout<<"mean :"<<mean;

}


