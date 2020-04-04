#include<iostream>
using namespace std;
int main()


{	int N;
	cin >> N;

	for (int curRow = 1; curRow <= N, ++curRow;)
	{
		int val = 1;
		if (curRow % 2 == 0) val = 0;

		//ternary operator
		//int val=c
		//printing allvalues in curRow

		for (int i = 0; i < curRow; ++i)
		{
			cout << val;
			val = 1 - val;
		}
		//don't forget the newline or enter
		cout << endl;
	}
	return 0;
}