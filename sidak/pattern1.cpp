#include<iostream>
using namespace std;
int main()
{	int nline;
	cin >> nline;
	int curline = 1; int nval;
	while (curline<= nline){

		int nval = curline;
	int val;
	if (curline%2 == 1)
	{	val = 1;
	}

	else
	{	val = 0;
	}
	int curval=0;
	while (curval< nval)
	{
		cout << val;
		val = 1 - val;
		curval++;
	}
	cout << endl;
	curline++;
	}
}