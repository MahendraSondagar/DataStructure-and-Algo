
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
 
 Coded: Sun, 20th June, 2021 / 19:21 PM 
 ****************************************************/

#include <stdio.h>
#include <stdlib.h>

/* self referential structure */
struct Node 
{
    /* data field */
    int data;
    struct Node *link;
};

int main(void)
{
 
 printf("Creating the Node for the linked list\r\n");
 /* creating the head node */
 struct Node *Head;
 Head = (struct Node *)malloc(sizeof(struct Node));      
 Head->data= 10;
 Head->link= NULL;
 
 printf(" Head Node data : %d\r\n", Head->data);
 return 0;
}
