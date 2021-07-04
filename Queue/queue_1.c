
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
 
 Coded: Sun, 20th June, 2021 / 22:51 PM 
 ****************************************************/
 
#include <stdio.h>
#include <stdlib.h>

#define QUEUE_CAPACITY 5


#define CMD_MENUE         "<1> EnQueue operation \r\n"\
                          "<2> DeQueue operation \r\n"\
                          "<3> Display The queue \r\n"\
                          "----------------------\r\n"

/* Creating the queue data structure */
typedef struct 
{
    int front, rear,count;
    unsigned capacity ;
    int *buff;
}MyQueue_t;

/* Creating the Queue */
MyQueue_t * Queue_Create(unsigned int capacity)
{
  MyQueue_t *queue = (MyQueue_t *)malloc(sizeof(MyQueue_t));
  queue->front = queue->rear = -1;
  queue->capacity = capacity;
  queue->count =0;
  /* Dynamically allocating the memory to the queue arary */
  queue->buff = (int *)malloc(queue->capacity * sizeof(int));
  return queue;
}

/* is Queue Empty ?*/
int isQueueEmpty(MyQueue_t *queue)
{
   if(queue->rear ==-1)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}
/* is Queue full ?*/
int isQueueFull(MyQueue_t *queue)
{
  if(queue->rear == queue->capacity-1)
  {
      return 1;
  }
  else
  {
      return 0;
  }
}

/* Adding the data in to the queue from the rear */
int EnQueue(MyQueue_t *queue, int byte)
{
  if(isQueueFull(queue))
  {
      printf("Queue is Full!\r\n");
      return 0;
  }
  else
  {
     if(queue->front== -1)
     {
         queue->front++;
     }
     queue->rear+=1;
     queue->buff[queue->rear] = byte;
     queue->count+=1;
  }
}

/* Removing the data from the Front from the queue */

int DeQueue(MyQueue_t *queue)
{
  if(isQueueEmpty(queue))
  {
      printf("Queue is Empty!\r\n");
  }
  else
  {
      printf("Dequeued item is : %d\r\n", queue->buff[queue->front]);
      queue->front+=1;
  }
}

/* Display the queue variables from the front */
void DisplayQueue(MyQueue_t *queue)
{
    for(int i= queue->front; i<queue->count; i++)
    {
        printf("[%d]= %d\t", i, queue->buff[i]);
    }
    printf("\r\n");
}

void DisplayMenue(const char *str)
{
    printf("%s", str);
}

int main(void)
{

  unsigned char cmd;
  int byte;
   /* Creating the queue Node pointer */
  MyQueue_t *queue = Queue_Create(QUEUE_CAPACITY);
  while(1)
  {
       DisplayMenue(CMD_MENUE);
       printf("Enter the Command: ");
       scanf("%hhd", &cmd);
       switch(cmd)
       {
           case 1:
            printf("Enter the byte: ");
            scanf("%d", &byte);
            EnQueue(queue, byte);
           break;

           case 2:
           DeQueue(queue);
           break;

           case 3:
           DisplayQueue(queue);
           break;

           default :
           printf("Error!\r\n");
       }
  }

}
