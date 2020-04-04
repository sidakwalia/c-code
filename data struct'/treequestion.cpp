#include<iostream>
#include<queue>
using namespace std;

struct Node
{int key;
	struct Node*left,*right;
	
};

struct Node* newnode(int *key){
	struct Node*temp=new Node;
	temp->key=key;
	temp->left=temp->right=NULL;
	return temp;
}

void inorder(struct Node*temp){
	if(!temp)
		return NULL;
	inorder(temp->left); 
    cout << temp->key << " "; 
    inorder(temp->right); 
} 
  

}