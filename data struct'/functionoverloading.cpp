#include<iostream>
using namespace std;

int area(int);
int area(int,int);

int main(){
	int s,l,b;
	cout<<"ENTER SIDE OF SQUARE"<<endl;
	cin>>s;
	cout<<"enter length and breadth"<<endl;
	cin>>l>>b;
	cout<<"Area of square is"<<int(s);
	cout<<"Area of rectangle"<<int(l,b);


	int area(int s){
		return (s*s);
	}

	int area(int ,int ){
		return (l*b);
	}
	return 0;
}