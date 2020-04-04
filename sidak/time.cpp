#include<iostream>
#include<ctime>
using namespace std;
int main()
{	
	int N;
	cout<<"N";
	cin>>N;

	time_t beg1 = clock();


	for (int i = 0; i < N; ++i);
	time_t end1 = clock();

	cout << (end1 - beg1);
	cout<<end1;

	cout<<"N";
	cin>>N;

	time_t beg2 = clock();
	for (int i = 0; i < N; i++);
	time_t end2 = clock();
	cout << (end2 - beg2);
	cout<<end2;
}
