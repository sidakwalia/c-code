#include<iostream>
using namespace std;


struct Node{
	int data;
	struct Node*left,*right;
	Node(int data){
		this->data=data;
		left=right=NULL;
	}
};

void printPostorder(struct Node* node){
	if(node==NULL)
		return;
	printPostorder(node->left);
	printPostorder(node->right);
	cout<<node->data<<endl;
}
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(node->left); 
  
    /* then print the data of node */
    cout << node->data << " "; 
  
    /* now recur on right child */
    printInorder(node->right); 
} 
  
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first print data of node */
    cout << node->data << " "; 
  
    /* then recur on left sutree */
    printPreorder(node->left);  
  
    /* now recur on right subtree */
    printPreorder(node->right); 
}  


int main(){
	struct Node*root=new Node(1);

	root->left=new Node(2);
	root->right=new Node(3);

	root->left->left=new Node(4);
	root->right->right=new Node(5);

	cout<<"\n preorder traversal is";
	printPreorder(root);

	cout<<"\n printPostorder traversal is";
	printPostorder(root);

	cout<<"\n print inorder traversal is";
	printInorder(root);

	return 0;


}

