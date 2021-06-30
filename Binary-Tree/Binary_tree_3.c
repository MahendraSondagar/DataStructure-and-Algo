
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

/* Creating the Node structure */
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

/* Creating new node */
struct Node * GetNewNode(int byte)
{
   
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node ));
    newnode->data = byte;
    newnode->left =NULL;
    newnode->right=NULL;
    return newnode;
}

/* inserting the new node */
struct Node * insert(struct Node *node, int byte)
{
    if(node ==NULL)
    {
      node = GetNewNode(byte);
      return node;
    }

    if(node->data > byte)
    {
       /* Adding the node at the left */
       node->left = insert(node->left, byte);
    }

    if(node->data < byte)
    {
      /* Adding the node at the right */
      node->right = insert(node->right, byte);
    }
    return node;
}

/* Traversing Left Root Right */
void inorder(struct Node *node)
{
    if(node == NULL)
    {
        return node;
    }
    
    inorder(node->left);
    printf("Node data: %d\r\n", node->data);
    inorder(node->right);
}

void preorder(struct Node *node)
{
    if(node == NULL)
    {
        return node ;
    }

    printf("Node data: %d\r\n", node->data);
    preorder(node->left);
    preorder(node->right);
}

void postorder(struct Node *node)
{
    if(node== NULL)
    {
        return node;
    }
    postorder(node->left);
    postorder(node->right);
    printf("Node data: %d\r\n", node->data);
    
}




int main(void)
{
   struct Node *node =NULL;
   node = insert(node, 100);
   node = insert(node, 50);
   node = insert(node, 30);
   node = insert(node, 150);
   node = insert(node, 200);
   printf("----inorder-----\r\n");
   inorder(node);
   printf("----Preorder----\r\n");
   preorder(node);
   printf("----Postorder---\r\n");
   postorder(node);

   return 0;
}
