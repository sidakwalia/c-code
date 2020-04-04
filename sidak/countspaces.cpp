#include<iostream>
using namespace std;
int main ()
{
	char ch;
	cin >> ch;
	int cnt =1;
	while (true)
	{
		cin.get(ch);
		if (ch == '$')
		{	break;
		}

		cnt=cnt+1;


	}
	cout <<cnt;
	return 0;

}