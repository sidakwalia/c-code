#include<iostream>
using namespace std;
int main ()
{
	char ch;
	cin >> ch;
	int cnt = 0;
	while (true)
	{
		cin.get(ch);
		if (ch == '$')
		{	break;
		}

		++cnt;


	}
	cout <<"cnt:";
	return 0;

}