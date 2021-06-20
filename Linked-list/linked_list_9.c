#include <stdio.h>
#include <stdlib.h>


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
 
 Coded: Sun, 20th June, 2021 / 23:05 PM 
 ****************************************************/
/* Adding the Node at certain position of the list */
 
/* Creating the Node */
struct Node 
{
    int data;
    struct Node *link;
};


void add_atPOS(struct Node *ptr, int byte, int pos)
{
    /* Creating the new node to hold the new data */
    struct Node *ptr2 = (struct Node *) malloc(sizeof(struct Node));
    ptr2 ->data = byte;
    ptr2 ->link = NULL;

    /* Travers the node link just before the position i.e = 2*/
    while (pos--!=2)
    {
        /*Travers the node link */
        printf("Inside the loop\r\n");
        ptr = ptr -> link;

    }

    ptr2->link= ptr ->link;
    ptr ->link = ptr2;

    
}

struct Node* add_atEnd(struct Node *head, int byte)
{
    /* Creating the new node to add at the end */
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr ->data = byte;
    ptr ->link = NULL;
    
    /* Connecting the link of dthe head with the new node */
    head->link = ptr;
    /* returning the last added node address */
    return ptr;
}

int main(void)
{

  printf("Adding the Node at any certain position...\r\n");
 /* 1. Creating the head pointer */
 struct Node *head = (struct Node *)malloc(sizeof(struct Node));
 head->data = 10;
 head->link = NULL;
 
 /* 2. Adding the Nodes at the end of the list */
 struct Node *ptr = head;
 ptr =add_atEnd(ptr, 20);
 ptr =add_atEnd(ptr, 30);


 /* 3. Adding the nodes at the mid of the list at pos 3*/
 /* Node/ data / position*/
  add_atPOS(head , 50, 3);

 
 while(head != NULL)
 {
     printf("Node -->%d\t", head->data);
     head = head ->link;
 }
 

 return 0;
}
