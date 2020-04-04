//Circular Link List


#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node*next;
};

void push(Node *head,int data){
	Node *ptr1=new Node();
	Node *head=*head;
	ptr1->data=data;
	ptr1->next=*head;

	if(*head==NULL){
		while(!temp->next=*head)
			temp=temp->next;
		temp->next=ptr1;
	}

}