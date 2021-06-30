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

/* Creating the Node */
struct Node 
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * GetNewNode(int byte)
{
    struct Node *Newnode;
    Newnode= (struct node *)malloc(sizeof(struct node ));
    Newnode->data = byte;
    Newnode->left = NULL;
    Newnode->right= NULL;
    return Newnode;
}

struct Node *insert(struct Node *root, int byte)
{
    if(root ==NULL)
    {
        root = GetNewNode(byte);
        return root;
    }
    if(root->data>byte)
    {
        /* attached as left child node */
        root->left= insert(root->left, byte);
    }

    if(root->data<byte)
    {
        /* attached as right child node */
        root->right=insert(root->right, byte);
    }
    return root;
}

void inorder(struct Node *root)
{
    if(root == NULL)
    {
        return ;
    }
    inorder(root->left);
    printf("Node data: %d\r\n", root->data);
    inorder(root->right);

}

int main(void)
{
  struct Node *root = NULL;
               root =   insert(root, 100);
               root =   insert(root, 70);
               root =   insert(root, 150);
               root =   insert(root, 60);
               root =   insert(root, 80);

               inorder(root);

  return 0;
}
