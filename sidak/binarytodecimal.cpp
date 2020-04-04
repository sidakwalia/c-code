#include<iostream>
using namespace std;
int main ()
{
	int binNum = 0; int dec;
	int mul = 1;
	while (dec != 0)
	{
		int bit = dec % 2;
		bit = bit + mul;
		binNum = bit + binNum;
		mul = mul * 10;

	}
	cout << "binNum:";
}
