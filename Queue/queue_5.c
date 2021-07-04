
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
 
/* Creating the node */
struct Node
{
    int data;
    struct Node *next;
};

/* Queue head and tail pointer */
struct Queue
{
 struct Node *front, *rear;
};

struct Queue * CreateQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    /* initially pointing to NULL*/
    q->front = q->rear = NULL;
    return q;
}

struct Queue * EnQueue(struct Queue *q, int byte)
{
  /*Creating the new node  */
  struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
  temp->data = byte;
  temp->next = NULL;

  /* is Queue Empty ?*/
  if(q->front == NULL)
  {
     q->front = q->rear= temp;
     return q;
  }

  q->rear->next = temp;
  q->rear = temp;
  return q;
}

void DeQueue(struct Queue *q)
{
   printf("Into the Dequeue\r\n");
   if(q->front == NULL)
   {
      printf("Queue is Empty!\r\n");
   }
   else if(q->front == q->rear)
   {
      printf("Queue has been Empty\r\n");
   }else
   {
     printf("Dequeued element : %d\r\n", q->front->data);
     struct Node * temp = q->front;
     q->front = q->front->next;
     free(temp);
   }
}

void DisplayQueue(struct Queue *q)
{
  if(q->front== q->rear)
  {
      printf("Queue is Empty\r\n");
  }
  struct Node * temp = q->front;
  while(temp!= NULL)
  {
      printf("Data: %d -->\t", temp->data);
      temp = temp->next;
  }
  printf("NULL\r\n");
}


/* Circular queue using linked list */
int main(void)
{
   struct Queue *q = CreateQueue();
   
   q=EnQueue(q, 10);
   q=EnQueue(q, 20);
   q=EnQueue(q, 30);
   DisplayQueue(q);
   DeQueue(q);
   DeQueue(q);
   DisplayQueue(q);
   return 0;
}
