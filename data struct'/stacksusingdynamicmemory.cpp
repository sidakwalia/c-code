//using dynamic memory

#include<iostream>
using namespace std;
#define bound 4


int top=-1;
int length=0;

int* create_new(int *a){
	int*new_a=new int[bound+length];
for(int i=0;i<length;i++)

	new_a[i]=a[i];
length=length+bound;
return new_a;}


int *pop(int*a){
	top--;
}

int* push(int *a,int new_element){
	if(top==length-1)
		a=create_new(a);


a[++top]=new_element;
return a;

}


void display(int* a) 
{ 
    // if top is -1, that means stack is empty 
    if (top == -1) 
        cout << "Stack is Empty" << endl; 
    else { 
        cout << "Stack: "; 
        for (int i = 0; i <= top; i++) 
            cout << a[i] << " "; 
        cout << endl; 
    } 
} 
int main(){
int* a=create_new(a);
a = push(a, 1); 
    a = push(a, 2); 
    a = push(a, 3); 
    a = push(a, 4); 
    display(a); 
  
    // pushing more element when stack is full 
    a = push(a, 5); 
    a = push(a, 6); 
    display(a); 
  
    a = push(a, 7); 
    a = push(a, 8);

    display(a); 
  
    // pushing more element so that stack can grow 
    a = push(a, 9); 
    a=pop(a);
    a=push(a,10);
    display(a); 
  
    return 0; }

