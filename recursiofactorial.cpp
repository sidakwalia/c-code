#include<iostream>
using namespace std;
int fact(int n) {
	if (n == 0) return 1;
	int factN = n * fact(n - 1);
	return factN;
}
int main()
{
	int n;
	cin >> n;
	int ans = fact(n);
	cout<<ans;
}
