#include<iostream>
using namespace std;
int main()
{
	double i, num, fact = 1;
	cout << "Enter integer:";
	cin >> num;
	i = num;
	while (num)
	{
		fact *= num;
		--num;
	}
	cout << "the factorial of" << i << "is" << fact << "";
	return 0;
}