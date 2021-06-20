
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
 /* Adding & deleting the node */
#include <stdio.h>
#include <stdlib.h>

/* Creating the Node */
struct Node 
{
  int data;
  struct Node *link;
};


struct Node * add_end(struct Node *head, int byte)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr ->data =byte;
    ptr ->link =NULL;

    head->link = ptr;
    return ptr;
}

struct Node * delete_first(struct Node *head)
{
    if(head== NULL)
    {
        return head;
    }
    else
    {
        struct Node *ptr = head;
        ptr = ptr->link;
        free(head);
        return ptr;
    }
}

int main(void)
{
  printf("Deleting the node at the begining of the list...\r\n");
  /* Creating the head pointer */
  struct Node * head = (struct Node *) malloc(sizeof(struct Node));
  head->data = 10;
  head->link = NULL;

  struct Node *ptr = head;
  struct Node *ptr2= head;
  
  /* Adding the nodes at the end of the list*/
  head= add_end(head, 20);
  head= add_end(head, 30);
  head= add_end(head, 40);

  printf("Before deleting the first Node...\r\n");
  while(ptr!=NULL)
  {
      printf("Node:---> %d\t", ptr->data);
      ptr = ptr->link;
  }


  /* Deleting the first node */
  ptr2 = delete_first(ptr2);


  printf("\r\nAfter deleting the first node...\r\n");
  while (ptr2!=NULL)
  {
      printf("Node:---> %d\t", ptr2->data);
      ptr2 = ptr2 ->link;
  }

  return 0;

}
