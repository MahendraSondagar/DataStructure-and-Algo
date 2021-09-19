
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
 
 Coded: Sun, 19th Sep, 2021 / 19:39 PM 
 ****************************************************/
/* 
* AIM: Stack Implimentation using linked list
       There are saveral occation at where it is important to impliment the stack using linked list
       1. when the size of the entire stack is unknowan
       2. The first node is always act as the Top of the linked list
       3. The time complexity is o(1) when we use the First node as the top
*
**/
#include <stdio.h>
#include <stdlib.h>

#define MENU "---------------------------------\r\n" \
             "1-> Push\r\n"\                                     
                 "2-> Pop\r\n"                       \
                 "3-> Peek\r\n"                      \
                 "4-> Print\r\n"                     \
                 "---------------------------------\r\n"

/* Creating the node */
struct node
{
    int data;
    struct node *link;
};

/* Global head node to point-out the top of the stack */
struct node *top = NULL;

/* Stack empty checking*/
int isEmpty(void)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* Push the data from the first node*/
void Push(int data)
{
    /* Creating the new node to hold the new data*/
    struct node *NewNode = (struct node *)malloc(sizeof(struct node));
    if (NewNode == NULL)
    {
        printf("Stack Overflow!\r\n");
        exit(1);
    }
    NewNode->data = data;
    NewNode->link = NULL;

    NewNode->link = top;
    /* Shifting the top to point out the new node*/
    top = NewNode;
}

/* Poping the elements from the top */
int Pop(void)
{
    if (isEmpty())
    {
        printf("Stack is Empty!\r\n");
        exit(1);
    }
    int value = top->data;
    struct node *temp = top;
    /* Traverse to the very next node from the top */
    top = top->link;
    free(temp);
    temp = NULL;
    return value;
}

/* Printing the elemnts of the stack */
void PrintStack(void)
{
    if (isEmpty())
    {
        printf("Stack is Empty!\r\n");
        exit(1);
    }
    struct node *temp = top;
    while (temp)
    {
        printf("%4d", temp->data);
        /* Traverse to the end of the list */
        temp = temp->link;
    }
    printf("\r\n");
}

/* picking the top most elemnt*/

int Peek(void)
{
    return (top->data);
}

int main(void)
{
    int cmd;
    int value;
    while (1)
    {
        printf("%s", MENU);
        printf("Enter the comamnd: ");
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &value);
            Push(value);
            break;

        case 2:
            printf("Popped value: %d\r\n", Pop());
            break;

        case 3:
            printf("Peeking the value : %d\r\n", Peek());
            break;

        case 4:
            printf("Stored values are...\r\n");
            PrintStack();
            break;

        default:
            printf("Error!\r\n");
            break;
        }
    }
}
