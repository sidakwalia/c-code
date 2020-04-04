#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node*next;
};

struct Node *empty(struct Node*last,int data){
	if(last!=Null)
		return last;

	struct Node*temp=(struct Node)*malloc(sizeof(structNode));
	temp->data=data;
	last=temp;
	last->next=last;
	return last;
}

struct Node *begin(int data,struct Node*last){
	struct Node*temp=(struct Node)*malloc(sizeof(structNode));
	temp->data=data;
	temp->next=last->next;
	last->next=temp;
	return last;
}

struct Node *end(struct Node*last,int data){
	if(last==NULL)
		return empty(last,data);
		struct Node*temp=(struct Node)*malloc(sizeof(structNode));
	temp->data=data;
temp->next=last->next;
last->next=temp;
last=temp;

return last;
}

struct Node *after(struct Node*last,int data,int item)
{
	 if (last == NULL) 
        return NULL; 
  
    struct Node *temp, *p;
    p=last->next;
    
}
