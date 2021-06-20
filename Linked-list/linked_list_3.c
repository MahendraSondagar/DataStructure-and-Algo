

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
 
 Coded: Sun, 20th June, 2021 / 22:41 PM 
 ****************************************************/
 
/* Creating n nodes without linking function */
#include <stdio.h>
#include <stdlib.h>

/* Creating the Node */
struct Node
{
  int data;
  struct Node *link;
};

int main(void)
{
    printf("First linked list example with 3 nodes \r\n");
 /* Creating the head pointer*/
 struct Node *head = (struct Node *) malloc(sizeof(struct Node));
 head->data = 10;
 head->link = NULL;

 /* Creating the second Node */
 struct Node * second = (struct Node *) malloc(sizeof(struct Node));
 second->data =20;
 second->link = NULL;

 head->link = second;
 
 /* Creating the 3rd node */
 second = (struct Node *) malloc(sizeof(struct Node));
 second->data =30;
 second->link =NULL;

 /* Linking the 2nd and 3rd node */
 head->link->link = second;

 printf("Data: %d\r\n", head->link->link->data);
 return 0;
}
