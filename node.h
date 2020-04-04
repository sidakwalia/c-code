#ifndef _NODE_H
#define_NODE_H
#include<iostream>
class Node { 
	public:
	int  data;
	Node *left;
	Node *right;

	Node(int d){
	data=d;
	left=NULL;
	right=NULL;
	}


};
#endif