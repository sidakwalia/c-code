#include<iostream>
using namespace std;

void fahToCel(int, int, int);
//note semicolon



int main()
{	int initial, final, step;
	cin >> initial >> final >> step;

	fahToCel(initial, final, step);

}

void fahToCel (int init,int final,int step){
	for(int st =init;st<=final;st+=step){
		cout<<st<<"/:"<<(5/9*(st-32))<<endl; 
	}
}
