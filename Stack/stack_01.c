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
#include <stdint.h>

#define STACK_SIZE  20
/* Stack configuration */
typedef struct 
{
  int top;
  int count;
  int buff[STACK_SIZE];
}Stack_config_t;

/* init stack by putting top =-1*/
void Stack_init(Stack_config_t *StackConfig)
{
  StackConfig->top =-1;  
}

/* Stack emptyness check */
uint8_t isStackEmpty(Stack_config_t *StackConfig)
{
  if(StackConfig->top == -1)
  {
     return 1;
  }
  else
  {
    return 0;
  }
}
/* Stack full check */
uint8_t isStackFull(Stack_config_t *StackConfig)
{
   if(StackConfig->top == STACK_SIZE-1)
   {
      return 1;
   }
   else
   {
     return 0;
   }
}
/* pushing in to the stack from bottom to top */
void Stack_push(Stack_config_t *StackConfig,int byte)
{
    if(!isStackFull(StackConfig))
    {
      StackConfig->buff[++StackConfig->top] = byte;
      StackConfig->count++;
    }
    else
    {
        printf("Stack is Full\r\n");
    }
  
}
/* poping the member from the stack */
void Stack_pop(Stack_config_t *StackConfig)
{
    if(isStackEmpty(StackConfig))
    {
     printf("Stack is Empty\r\n");
    }
    else
    {
       printf("poped item is : %d\r\n",   StackConfig->buff[StackConfig->top]);
       StackConfig->buff[StackConfig->top--];
       StackConfig->count--;
    }
}

/* printing the stack */
void Stack_print(Stack_config_t *StackConfig)
{
    for(int i=0; i<StackConfig->count; i++)
    {
       printf("%4d ---> %d\r\n", StackConfig->buff[i],i);
    }
}

int main(void)
{
 printf("Stack test...\r\n");
 Stack_config_t StackCfg;
 /*init stack by top =-1 */

 while(1)
 {
     uint8_t cmd;
     int byte=0;
     printf("-------------------------\r\n");
     printf("1> To create the Stack   \r\n");
     printf("2> To push the Stack     \r\n");
     printf("3> To pop the Stack      \r\n");
     printf("4> To print the Stack    \r\n");
     printf("4> Empty check for Stack \r\n");
     printf("-------------------------\r\n");
     printf("Enter the command: ");
     scanf("%d", &cmd);
     switch (cmd)
     {
     case 1:
         Stack_init(&StackCfg);
         break;

    case 2:
         printf("Enter the byte: ");
         scanf("%d", &byte);
         Stack_push(&StackCfg, byte);
         break;

    case 3:
         Stack_pop(&StackCfg);
         break;
    
    case 4:
         Stack_print(&StackCfg);
         break;

    case 5:
         isStackEmpty(&StackCfg);
         break;

    case 6:
         isStackFull(&StackCfg);
         break;

     default:
         printf("Invald command\r\n");
         break;
     }
 }
 return 0;
}
