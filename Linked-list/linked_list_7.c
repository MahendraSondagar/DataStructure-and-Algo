
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
 
 Coded: Sun, 20th June, 2021 / 22:51 PM 
 ****************************************************/
 
 /* Adding the node at the beginning of the list */

#include <stdio.h>
#include <stdlib.h>

/* Creating the Node */
struct Node
{
 int data;
 struct Node *link ;
};

struct Node * add_begining(struct Node *head, int byte)
{
  /* Creating the Node pointer to hold the address of the new node*/
  struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
  ptr->data = byte;
  ptr ->link = NULL;

  ptr ->link = head;
  head = ptr;
  /* returning the first node address */
  return head;
}

int main(void)
{
    printf("Adding the Node at the begining of the list...\r\n");
  /* 1. Creating the head pointer*/
  struct Node *head = (struct Node *) malloc(sizeof(struct Node));
  head -> data =10;
  head -> link =NULL;

 /* Creating the 2nd Node */
 struct Node *ptr = (struct Node *) malloc(sizeof(struct Node ));
 ptr ->data =20;
 ptr ->link =NULL;

 /* 3. linking the first 2 nodes */
 head->link = ptr;

 ptr = head;
  
 /* 4. Adding the node at the begining of the list*/
 ptr= add_begining(ptr, 5);

 while(ptr!= NULL)
 {
     printf("Node : %d --->\t", ptr->data);
     ptr= ptr->link;
 }

 return 0;
}
