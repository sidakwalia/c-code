#include<iostream>

using namespace std;
# define MAX 1000

class stack{
	int top;
	public:int a[MAX];
	stack(){
		top ==-1;
		bool push(int x);
		 int pop(); 
    bool isEmpty(); 
	};

	bool stack::push(int x){
		if(top>=MAX-1){
			cout<<"stack overflox"<<endl
		}
		else
	}
}


