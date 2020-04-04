//COUNT NO OF CHARACTERS TILL YOU READ A $
#include<iostream>
using namespace std;
int main ()
{	char ch;
	int cnt = 0;
	while (true)
	{
		cin >> ch;
		if (ch == '$') {
			break;
		}
		++cnt;
	}
	cout<<cnt;

}