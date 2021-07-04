

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
#include <stdint.h>

#define CAPACITY 10

/* Circular queue struct */
typedef struct 
{
  int rear;
  int front;
  unsigned int size;
  int *buff;
}MyQueue_t;

/* Creating the circular qaueue */
MyQueue_t * CreateQueue(unsigned int capacity)
{
     MyQueue_t *MyQueue = (MyQueue_t *)malloc(sizeof(MyQueue_t));
     MyQueue->size = capacity;
     MyQueue->front = MyQueue->rear = -1;
     MyQueue->buff = (int *) malloc(sizeof(int )* capacity);
     return MyQueue;
}

/*Enque the circular Queue */
void Enqueue(MyQueue_t *MyQueue, int val)
{
  if(MyQueue->front == 0 && MyQueue->rear== MyQueue->size-1)  
  {
      printf("Queue is Full\r\n");
  }
  else if (MyQueue->front== (MyQueue->rear+1)%MyQueue->size)
  {
     printf("Queue is Full\r\n");
  }
  else if (MyQueue->rear == MyQueue->size-1 && MyQueue->front!=0)
  {
      MyQueue->buff[++MyQueue->rear]= val;
  }
  else
  {
      if(MyQueue->front== -1)
      {
       MyQueue->front+=1;
      }
      MyQueue->buff[++MyQueue->rear]= val; 
  }
}

/* Dequeue the circular queue */
void Dequeue(MyQueue_t *MyQueue)
{
   if(MyQueue->rear == -1 && MyQueue->front ==-1)
   {
       printf("Queue is Empty\r\n");
   }
   else if(MyQueue->front == MyQueue->size-1 && MyQueue->rear == MyQueue->size-1)
   {
       printf("Queue is Empty\r\n");
   }
   else
   {
       printf("Dequeue elements is : %d\r\n", MyQueue->buff[MyQueue->front]);
       MyQueue->buff[MyQueue->front++];
   }
}

/* Display the queue elements */
void Display(MyQueue_t *MyQueue)
{
   if(MyQueue->front == -1)
   {
       printf("Queue is Empty\r\n");
   }else if (MyQueue->rear > MyQueue->front)
   {
       for(int i= MyQueue->front; i <= MyQueue->rear; i++)
       {
           printf("Queue[%d]=%d\r\n",i, MyQueue->buff[i]);
       }
   }
   else
   {
       for(int i=0; i<= MyQueue->rear; i++)
       {
           printf("Queue[%d]= %d\r\n", i, MyQueue->buff[i]);
       }
   }
}

int main(void)
{
    MyQueue_t *MyQueue = CreateQueue(CAPACITY); 
    Enqueue(MyQueue, 10);
    Enqueue(MyQueue, 20);
    Enqueue(MyQueue, 30);
    Enqueue(MyQueue, 40);
    Display(MyQueue);
    Dequeue(MyQueue);
    Display(MyQueue);
}
