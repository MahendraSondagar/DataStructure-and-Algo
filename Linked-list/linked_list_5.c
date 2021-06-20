
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
 /* Adding the nodes at the end of the list */

#include <stdio.h>
#include <stdlib.h>

/* Creating the Node */
struct Node 
{
    int data;
    struct Node *link;
};

void add_Node(struct Node *head, int data)
{
    struct Node * ptr ;
    /* Creating the temp node */
    struct Node * temp = (struct Node *) malloc(sizeof(struct Node));
    ptr= head;
    if(head == NULL)
    {
        printf("No Nodes are available!\r\n");
    }
    else
    {
      temp ->data = data;
      temp ->link = NULL;
      
      /* Reach till the NULL*/
      while(ptr->link!=NULL)
      {
          ptr = ptr->link;
      }
     /* Adding the new Node at the end of the list*/
      ptr->link = temp;
    }   
}

int main(void)
{
  printf("Adding the node at the ending of the list\r\n");
    /*Creating the head pointer */
  struct Node *head = (struct Node *) malloc(sizeof(struct Node));
  head -> data = 10;
  head -> link = NULL;
  
  /* Creating the Second Node*/
  struct Node *second = (struct Node *) malloc(sizeof(struct Node));
  second -> data =20;
  second -> link = NULL;

  head->link = second;

  /* Creating the 3rd Node */
  second = (struct Node *) malloc(sizeof( struct Node)); 
  second -> data =30;
  second -> link =NULL;

  /* Linking the 2nd node with the 3rd Node*/
  head ->link ->link = second;
  
  /*
   * Creating the function to add the n nodes at the end of the list 
   * 
   * /

  /* Adding the New node at the end of the list */
  add_Node(head, 40);
  add_Node(head, 50);
  add_Node(head, 60);

  /* printing the final list */
  struct Node * ptr =  (struct Node *) malloc(sizeof(struct Node));
  ptr = head;
      while(ptr!=NULL)
      {
          printf("Node : %d --->\t", ptr->data);
          ptr= ptr->link;
      }
  return 0;
}
