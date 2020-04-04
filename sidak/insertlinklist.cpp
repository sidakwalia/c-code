#include<iostream>
using namespace std;


struct Node{
public:
	int data;
	struct Node *next;
};

void push(struct node* head,int new_data){
	struct Node * new_node=new Node();
new->data=new_data;
new_node->next=*head;
*head=new_node;

}


int main(){



}