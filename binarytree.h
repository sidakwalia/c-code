#include<iostream>
#include "node.h"

Node* inputTree(){
	int x;
	cin>>x;
	if(x==-1) return NULL;


	Node*root=new Node(x);
	cout<<"Left child of"<<root->left;
	root->left=inputTree();
	cout<<"Right child of "<<root->right;
	root->right=inputTree();

	return root;

	}
	Node*createTreeLevel(){
		int x;
		cin>>x;
		if(x==-1) return NULL;

		Node*root=new Node(x);
		queue<Node *>q;
		q.push(root);


        while(q.empty()==false){
        	Node*parent=q.front();
        	q.pop();

       cin>>x;
       if (x!=-1){
       	parent->left=new Node(x);
       	q.push(parents->left);
       }
       cin>>x;
       if(x!=-1){
       	parents->right=new Node(x);
       	q.push(parents->right);
       }

       }
        }

	}



	int main(){
	Node*root=inputTree();
	printTree()
	}