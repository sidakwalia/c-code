#include<iostream>
using namespace std;

class student{private:int a;

public:
void showdata(int x){
a=x;
}
void printdata(){
cout<<a<<endl;
}


	
};
int main(){
	student obj1,obj2;

	obj1.showdata(323);
obj2.showdata(1221);

obj1.printdata();
obj2.printdata();
return 0;
}