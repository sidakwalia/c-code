//stack as Linked list


#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node*link;

};
struct Node*top;


void push(int data){
	struct Node*temp;
	temp=(struct Node*)malloc(sizeof(struct Node));

	if(!temp){
		cout<<"overflow"<<endl;
		exit(1);
	}

	temp->data=data;
	temp->link=top;
	top=temp;
}

int isEmpty() 
{ 
    return top == NULL; 
} 
  
// Utility function to return top element in a stack 
int peek() 
{ 
    // check for empty stack 
    if (!isEmpty(top)) 
        return top->data; 
    else
        exit(EXIT_FAILURE); 
} 
void pop(){
	struct Node*temp;
	 if (top == NULL) { 
      cout<<"stack underflow"<<endl;
        exit(1); 
    } 
}