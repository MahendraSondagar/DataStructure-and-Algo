
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
 
 Coded: Sun, 30th June, 2021 / 21:48 PM 
 ****************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
Basic Binary tree Creation 
*/

/* Creating the Node for the binary tree */
struct Node 
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * newNode(int byte)
{
    /*Temp node for the new data  */
   struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
   temp->data  = byte;
   temp->left  = NULL;
   temp->right = NULL;
   return temp;
}

int main(void)
{
 /*    tree
      ----
       1    <-- root
     /   \
    2     3  
   /   
  4
  */

   printf("Basic Binary tree creation...\r\n");
   /* Creating the root node */
   struct Node *root = newNode(1);
   root->left        = newNode(2);
   root->right       = newNode(3);
   root->left->left  = newNode(4);
   return 0;
}
