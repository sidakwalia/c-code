#include<iostream>
using namespace std;

void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main()
int a, b;
cin >> a >> b;
cout << "Before swap";
cout << a << b << endl;
swap(a, b);
cout << "After swap";
cout << a << b << endl;
}