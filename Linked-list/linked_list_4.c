

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
 
 Coded: Sun, 20th June, 2021 / 22:47 PM 
 ****************************************************/

/* Linked nodes counting...*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* Creating the Node */
struct Node
{
  int data;
  struct Node *link;
};

void Count_linked_Nodes(struct Node *head)
{
  uint8_t count =0;
  struct Node *ptr = head;
  if(ptr ==NULL)
  {
      printf("Node is zero\r\n");
      exit(1);
  }
  else
  {
    while (ptr != NULL)
    {
      count++;
      ptr= ptr->link;
        /* code */
    }
  }
  printf("Node counts: %d\r\n", count);
}

int main(void)
{

   printf("Linked list Node counting...\r\n");
   /* Creating the head pointer*/
   struct Node *head = (struct Node *)malloc(sizeof(struct Node));

   head->data=10;
   head->link= NULL;

   /* Creating the second Node */
   struct Node * second = (struct Node *)malloc(sizeof(struct Node));
   second->data =20;
   second->link =NULL;

   head->link = second;

   second = (struct Node *)malloc(sizeof(struct Node));
   second->data = 30;
   second->link = NULL;

   head->link->link = second;
   printf("Data: %d\r\n", head->link->link->data);

   Count_linked_Nodes(head);
   return 0;
}
