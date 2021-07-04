

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

/* Creating the Node */
struct Node
{
    int data;
    struct Node *next;
};

/* Creating the front and rear node */
struct Queue
{
    struct Node *front, *rear;
};

/* Creating the queue */
struct Queue * CreateQueue()
{
   struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
   /* Initially pointing to NULL */
   q->front = q->rear =NULL;
   return q;
}


struct Queue * EnQueue(struct Queue *q, int byte)
{
    struct Node *newNode = (struct Node* )malloc(sizeof(struct Node));
    newNode->data = byte;
    newNode->next = NULL;

    if(q->front== NULL)
    { 
        q->front = q->rear = newNode;
        return q;
    }
    q->rear->next = newNode;
    q->rear = newNode;
    return q;
}

/* Displaying the Queue elements */
void  DisplayQueue(struct Queue *q)
{
    struct Node *temp = q->front;
    while(temp!=NULL)
    {
        printf("Data: %d -->\t", temp->data);
        temp = temp->next;
    }
    printf("\r\n");
}

struct Queue * DeQueue(struct Queue *q)
{
    
    /* if queue is Empty ?*/
    if(q->front == NULL)
    {
        return q;
    }
    printf("DeQueue iTem: %d\r\n", q->front->data);
    /* Creating the new node to free from the current head position */
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = q->front;
    /* Travers the one step ahead of the current head position */
    q->front = q->front->next;
    free(temp);
    return q;
}


/* Linear Queue using the linked list */
int main(void)
{
  struct Queue *q = CreateQueue();
  q= EnQueue(q, 10);
  q= EnQueue(q, 20);
  q= EnQueue(q, 30);
  q= EnQueue(q, 40);
  DisplayQueue(q);
  DeQueue(q);
  DeQueue(q);
  DisplayQueue(q);
}
