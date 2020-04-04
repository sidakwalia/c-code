#include<iostream>
using namespace std;


class Node{
public:
	int data;
	Node *next;
};


void printlist(Node *n){while(n!=NULL){
	cout<<n->data<<endl;
n=n->next;
}

}

int main(){
	Node *head=NULL;
	Node *second=NULL;
	Node *third=NULL;


	head =new Node();
	second=new Node();
	third=new Node();



	head->data=2;
	head->next=second;

	second->data=311;
	second->next=third;

	third->data=1221;
	third->next=NULL;

	cout<<third->data<<endl;


printlist(head);
	return 0;
}