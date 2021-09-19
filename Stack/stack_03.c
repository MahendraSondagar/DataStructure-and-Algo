
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
 
 Coded: Sun, 19th Sep, 2021 / 16:32 PM 
 ****************************************************/
#include <stdio.h>
/* Array implimentation of the stack_arr[0] as a top*/
/* Aim: need to keep the stack_arr[0] as a top 
        Fist inserted Elemnt can be shift towards right
        Data can be popped from the stack_arr[0] and then shifted towards left
*/
#define MAX 5
int stack_arr[MAX] = {0};
int first = -1;

#define MENU     "---------------------------------\r\n"    \
                 "1-> Push\r\n"\                                     
                 "2-> Pop\r\n"\
                 "3-> Peek\r\n"\
                 "4-> Print\r\n"\
                 "---------------------------------\r\n"   

/* is Stack Full ???*/
int isFull(void)
{
    if (first == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* is Stack Empty to store new data ??*/
int isEmpty(void)
{
    if (first == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* Pushing the new data from the stack_arr[0]*/
void push(int data)
{
    if (isFull())
    {
        printf("Stack is Full\r\n");
        return;
    }
    first += 1;
    /* pushing the elements from the left to right */
    for (int i = first; i > 0; i--)
    {
        stack_arr[i] = stack_arr[i - 1];
    }
    /* Pushing the new data at 0th location */
    stack_arr[0] = data;
}

int pop(void)
{
    if (isEmpty())
    {
        printf("Underflow Condition...\r\n");
    }
    int value = stack_arr[0]; /* Copying the popped Elements*/
    for (int i = 0; i < first; i++)
    {
        /* Shifting the elemnts from right to feft */
        stack_arr[i] = stack_arr[i + 1];
    }
    /* Decrimenting the elemnts count by 1*/
    first -= 1;
    return value;
}

/* returning the first Element*/
int peek(void)
{
    return stack_arr[0];
}

/* Printing the available stack Elements from the first place to first inserted*/
void print_stack(void)
{
    for (int i = 0; i <= first; i++)
    {
        printf("%4d", stack_arr[i]);
    }
    printf("\r\n");
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
            push(value);
            break;

        case 2:
            printf("Popped value: %d\r\n", pop());
            break;

        case 3:
            printf("Peeking the value : %d\r\n", peek());
            break;

        case 4:
            printf("Stored values are...\r\n");
            print_stack();
            break;

        default:
            printf("Error!\r\n");
            break;
        }
    }

    return 0;
}