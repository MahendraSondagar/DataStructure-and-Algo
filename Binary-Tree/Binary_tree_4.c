
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

#define MENUE         "--------------------------------\r\n" \
                      "        Enter the Command       \r\n" \
                      "1. To insert the Node           \r\n" \
                      "2. To Display inorder manner    \r\n" \
                      "3. To display preorder manner   \r\n" \
                      "4. To display postorder manner  \r\n" \
                      "5. To delete the node           \r\n" \
                      "--------------------------------\r\n"
/* Node data structure  */
struct Node 
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * GetNewNode(int byte)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = byte;
    node->left = NULL;
    node->right= NULL;
    return node;
}

/* inserting the node */
struct Node * insert(struct Node *node, int byte)
{
    if(node ==NULL)
    {
        /* Create new node */
        node = GetNewNode(byte);
        return node;
    }
    if(node->data >byte)
    {
       /* attaching to the left */
       node ->left = insert(node->left, byte);
    }
    if(node->data < byte)
    {
      /* attaching to the right */
      node -> right = insert(node ->right, byte);
    }
    return node;
}

/* display tree in inorder manner*/
void inorder(struct Node *node)
{
    if(node == NULL)
    {
        return node;
    }
    inorder(node->left);
    printf("Node data : %d\r\n", node->data);
    inorder(node->right);
}

/* display tree in preorder manner*/
void preorder(struct Node *node)
{
    if(node == NULL)
    {
        return node;
    }
    printf("Node data : %d\r\n", node->data);
    inorder(node->left);
    inorder(node->right);
}

/* display tree in postorder manner*/
void postorder(struct Node *node)
{
    if(node == NULL)
    {
        return node;
    }
    inorder(node->left);
    inorder(node->right);
    printf("Node data : %d\r\n", node->data); 
}

int main(void)
{
    struct Node *node =NULL;
    unsigned int cmd;
    int byte;

    while(1)
    {
       printf("%s", MENUE);
       scanf("%d", &cmd);
       switch (cmd)
       {
       case 1: 
            printf("Enter the node data :");
            scanf("%d", &byte);
            node = insert(node, byte);
           break;

       case 2:
           inorder(node);
           break;
        
       case 3:
           preorder(node);
           break;

       case 4:
           postorder(node);
           break;

       case 5:
           printf("deleting the node\r\n");
           break;
       
       default:
           break;
       }
    }
    return 0;
}
