//ABCDEEDCBA
	//ABCDDCBA
	//ABCCBA
	//ABBA
	//AA 
#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{  int N;
	cin>>N;
	for(int curRow=N;curRow>=1;--curRow)
	{ //print curRow in increasing order
      char c='A';
      for(int i=0;i<curRow;++i)
      {
     
      	cout<<c;
      c++;
      }
      for(int i=0;i<curRow;++i)
      {
      	c=c-i;
      	c--;

      	cout<<c;

      }
      cout<<endl;

	}
return 0;
}

