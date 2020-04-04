#include<iostream>
using namespace std;
int main ()
{ int no,a=0;
cout<<"enter no:";
cin>>no;
while(no)
{ no=no/10;
a++;

}
cout<<"no of digit in given number is:"<<a;

}