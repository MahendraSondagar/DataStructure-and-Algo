

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

/* Creating the queue data structure */
typedef struct 
{
   int front,rear,size;
   int capacity;
   int *buff;
}MyQueue_t;

/* Creating the queue */
MyQueue_t * Queue_Create(unsigned capacity)
{
    /* Dynamically creating the queue pointer */
  MyQueue_t *queue = ( MyQueue_t *)malloc(sizeof(MyQueue_t ));
  queue->size=0;
  queue->capacity = capacity;
  queue->front    = 0;
  queue->rear     = capacity-1;
  /* Dynamically assigning the memory to array */
  queue->buff = (int *)malloc( queue->capacity * sizeof(MyQueue_t));
  return queue;
}

/* isQueue Empty ?*/
int isQueueEmpty(MyQueue_t *queue)
{
  if(queue->size ==0)
  {
      return 1;
  }
  else
  {
      return 0;
  }
}

/* is Queue Full ?*/
int isQueueFull(MyQueue_t *queue)
{
  if(queue->size == queue->capacity)
  {
      return 1;
  }
  else
  {
      return 0;
  }
}

/* Enqueue the bytes from the rear */
int EnQueue(MyQueue_t *queue, int byte)
{
  if(isQueueFull(queue))
  {
      printf("Queue is Full\r\n");
      return 0;
  }
  else
  {
        /* Fallback tto zero if it's hit to the max capacity*/
        queue->rear = (queue->rear+1) % queue->capacity;
        queue->buff[queue->rear] = byte;
        queue->size ++;
        return 1;
  }
}

/* Dequeue the bytes from the front */
int DeQueue(MyQueue_t *queue)
{
  if(isQueueEmpty(queue))
  {
      printf("Queue is Empty!\r\n");
      return 0;
  }
  else
  {
     printf("Dequeued elements: [%d]\r\n", queue->buff[queue->front]);
     /* Move the head part by 1 toward rear*/
     queue->front= (queue->front +1)% queue->capacity;
  }
}
/*Display the queued data */
void DisplayQueue(MyQueue_t *queue)
{
    for(int i= queue->front; i< queue->size; i++)
    {
        printf("[%d]: %d\t", i, queue->buff[i]);
    }
    printf("\r\n");
}

int main(void)
{
MyQueue_t *queue =Queue_Create(100);
EnQueue(queue, 10);
EnQueue(queue, 20);
EnQueue(queue, 30);
EnQueue(queue, 40);

DisplayQueue(queue);

DeQueue(queue);
DisplayQueue(queue);
return 0;
}
