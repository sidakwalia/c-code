#include<iostream>
using namespace std;
int main ()
{
	int number;
	cin >> number;
	int no = 2;
	int divisor = 2;
	bool isprime = true;

	while (no <= number) {




		while (divisor < no) {
			if (no % divisor == 0)
				isprime = false;
			break;
		}
		++divisor;

	

		if (isprime == true) {
			cout << no;
			no++;
		}

	}
}



