
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

 /* Adding the ndoe at the mid of the list!*/

#include <stdio.h>
#include <stdlib.h>

/* Creating the Node */
struct Node 
{
 int data;
 struct Node *link;
};

struct Node * add_mid(struct node *ptr, int position, int byte)
{
    /* Creating the new node pointer */
   struct Node *ptr2 = (struct Node *) malloc(sizeof(struct Node));
   ptr2 -> data = byte;
   ptr2 -> link = NULL;

   /*travering till the position at where you to add the node */
   for(int i=0; i<position; i++)
   {
       ptr = ptr->link;
   }

   ptr ->link = 
   
}

int main(void)
{
  printf("Adding the Node at perticular position between the link nodes\r\n");
  /* 1. Creating the head pointer */
  struct Node *head = (struct Node *) malloc(sizeof(struct Node));
  head -> data = 10;
  head -> link = NULL;

  /* 2. Creating the 2nd node */
  struct Node *second = (struct Node *) malloc( sizeof(struct Node));
  second -> data = 20;
  second -> link = NULL;
 
 /* Linking the first 2 nodes*/
  head->link = second;

  /* Creating the 3rd node */
  second = (struct Node *) malloc(sizeof(struct Node));
  second -> data =30;
  second ->link  =NULL;
 
  /* linking the 2nd & 3rd node*/
  head->link->link = second;

  add_mid(head, 2, 50);

}
