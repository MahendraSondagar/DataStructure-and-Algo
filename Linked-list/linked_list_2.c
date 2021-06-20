
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
 
 Coded: Sun, 20th June, 2021 / 22:14 PM 
 ****************************************************/
 
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
 /* Creating the head pointer*/

 struct Node *head = (struct * Node)malloc(sizeof(struct Node));   
 /* allocating the data to the first node */
 head->data = 10;
 head->link = NULL;

 /* Creating the Second node */
 struct Node *Next = (struct * Node)malloc(sizeof(struct Node));
 Next->data =20;
 Next->link = NULL;

 head->link = Next;  /* linking the first node with the 2nd node */

 return 0;
}
