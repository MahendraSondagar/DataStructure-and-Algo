
/****************************************************
 DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                   Version 2, December 2021
 
Copyright (C) 2021 Mahendra Sondagar <mahendrasondagar08@gmail.com>
Everyone is permitted to copy and distribute verbatim or modified
copies of this license document, and changing it is allowed as long
as the name is changed.
 
           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
  TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 0. You just DO WHAT THE FUCK YOU WANT TO.
 
 Coded: Sun, 20th June, 2021 / 22:59 PM 
 ****************************************************/
 /* Adding the nodes at the end of the list */

#include <stdio.h>
#include <stdlib.h>


/* Creating the node */
struct Node 
{
    int data;
    struct Node *link;
};

struct Node * add_endNode(struct Node *head, int byte)
{
    /* Creating the node pointer to hold the address of the last new node */
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr -> data = byte;
    ptr -> link = NULL;

    head ->link = ptr;
    /* return the address of the new node at the end */
    return ptr;
}

int main(void)
{

 printf("Adding the node at the end of the  list...\r\n");
 /* 1. Creating the head pointer */
 struct Node *head = (struct Node *) malloc(sizeof(struct Node));
 head -> data =10;
 head -> link =NULL;

 /* 2. Creating the 2nd Node pointer*/
 struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
 ptr ->data =20;
 ptr ->link =NULL;
 /* linking the first node with the 2nd */
 head ->link = ptr;
 
 /*3. adding the node at the end of the list  */
 ptr = add_endNode(ptr, 30);
 ptr = add_endNode(ptr, 40);
 ptr = add_endNode(ptr, 50);

 while(head!= NULL)
 {
     printf("Node: %d\r\n", head->data);
     head = head->link;
 }

 return 0;
}
