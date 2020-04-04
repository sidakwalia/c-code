#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct Node{
public:
	struct Node*next;
	int data;
};


void push(struct Node**head,int new_data){
	struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=*head;
	*head=new_node;
}


void deleteNode(struct Node**head,int position)
{
	
if(*head==NULL)
return;

struct Node*temp=*head;

if(position==0){
	*head=temp->next;
	free(temp);
	return;
}


for(int i=0;temp!=NULL && i<position-1;i++)
temp=temp->next;

// If position is more than number of ndoes 
    if (temp == NULL || temp->next == NULL) 
         return; 
  
    // Node temp->next is the node to be deleted 
    // Store pointer to the next of node to be deleted 
    struct Node *next = temp->next->next; 
  
    // Unlink the node from linked list 
    free(temp->next);  // Free memory 
  
    temp->next = next;  // Unlink the deleted node from list 
} 


void printlist(struct Node*node){

	while(node!=NULL){
		cout<<node->data<<" "<<endl;
		node=node->next;
	}

}

int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 
  
    push(&head, 7); 
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 2); 
    push(&head, 8); 
  
    puts("Created Linked List: "); 
    printlist(head); 
    deleteNode(&head, 4); 
    puts("\nLinked List after Deletion at position 4: "); 
    printlist(head); 
    return 0; 
} 
