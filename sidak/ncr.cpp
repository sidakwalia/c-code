#include<iostream>
using namespace std;

long int fact(int);
int main ()
{
	int n, r;
	long int ncr, npr;
	cout << "Enter the value of n:";
	cin >> n >> r;
	cout << "Enter the value of r:";
	npr = fact(n) / fact(n - r);
	ncr = npr / fact(r);
	cout << "NCR value =" << ncr << "/n";

}

long int fact(int x) {
	int i, f = 1;
	for (i = 2; i <= x; i++)
	{
		f = f * i;
	}
	return f;
}