

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

/* Ctreating the node */
struct Node  
{
  int data;
  struct Node *link;
};

struct Node * add_at_End(struct Node *head, int byte)
{
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->data=byte;
     ptr->link = NULL;

     head->link= ptr;
     return ptr;
}

struct Node * delete_node(struct Node *head, int pos)
{
   int count=1;
    struct Node *ptr = head;
    struct Node *temp = head;

    while(count++<pos)
    {
       ptr = ptr->link;
    }

    while(temp!= NULL)
    {
      temp =temp->link;
    }

}

int main(void)
{
  printf("Deleting the node from the certain position..\r\n");
  /* Creating the head pointer */
  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  head ->data =10;
  head ->link =NULL;

  struct Node *ptr = head;
  head= add_at_End(head, 20);
  head= add_at_End(head, 30);
  head= add_at_End(head, 40);

  while(ptr!=NULL)
  {
    printf("Node->%d\t", ptr->data);
    ptr= ptr->link;
  }
  return 0;

}
