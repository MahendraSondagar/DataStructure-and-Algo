
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
 
 Coded: Sun, 20th June, 2021 / 25:27 PM 
 ****************************************************/
/* Stack getting started */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define STACK_SIZE 10

/* Stack data structure example with using the dynamic memory allocation*/

/*Creating the stack structure*/
typedef struct 
{
 int count;
 int top;
 int *buff;
}StackInfo_t;

/* Stack init */
StackInfo_t *Stack_init(StackInfo_t *stack)
{
   stack = (StackInfo_t *)malloc(sizeof(StackInfo_t));
   stack->count=0;
   stack->top =-1;
   /* Dynamicaclly assign the memory to array */
   stack->buff = (int *)malloc(sizeof(int)* STACK_SIZE);
   return stack;
}

/*Stack Whether the stac is empty or not  */
uint8_t isEmpty(StackInfo_t *stack)
{
    if(stack->top ==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* Checking whether the stack is full or not*/
uint8_t isFull(StackInfo_t *stack)
{
  if(stack->top == STACK_SIZE)
  {
      return 1;
  }
  else
  {
      return 0;
  }
}

/* pushing the bytes in to the stack from bottom to top*/
void Stack_push(StackInfo_t *stack, int byte)
{
  if(!isFull(stack))
  {
      stack->buff[++stack->top] = byte;
      stack->count++;
  }
}
/* popping the byte from the stack */
void Stack_pop(StackInfo_t *stack)
{ 
    if(!isEmpty(stack))
    {
        printf("Popped data: %d\r\n", stack->buff[stack->top]);
        stack->buff[stack->top--];
        stack->count--;
    }
    else
    {
      printf("Stack is Empty!\r\n");
    }
  
}

/*Displaying the stack */
void Stack_Display(StackInfo_t *stack)
{
    for(int i=0; i<stack->count; i++)
    {
       printf("%4d\t @ %4d\r\n", stack->buff[i], i); 
    } 
}


int main(void)
{
 StackInfo_t *stack;
 stack = Stack_init(stack);
 Stack_push(stack, 10);
 Stack_push(stack, 20);
 Stack_push(stack, 30);
 Stack_push(stack, 40);

 Stack_Display(stack);
 Stack_pop(stack);
 Stack_Display(stack);

 return 0;

}
