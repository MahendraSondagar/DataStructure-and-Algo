#include <stdio.h>
#include <stdlib.h>

/*creating the structure of the node  */
struct node
{
    int data;
    struct node *link;
};

/* Printing the list with the nodes */
void PrintList(struct node *head)
{
    while (head != NULL)
    {
        printf("Data-> %d ->\t", head->data);
        ;
        head = head->link;
    }
    printf("NULL\r\n");
}

/* Getting  the new node */
struct node *GetNode(int byte)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node != NULL)
    {
        new_node->data = byte;
        new_node->link = NULL;
        return new_node;
    }
    else
    {
        printf("No heap available\r\n");
        exit(1);
    }
}

/* Adding the node at the beggining of the list */
struct node *Add_AT_First(struct node *head, int byte)
{
    if (head == NULL)
    {
        head = GetNode(byte);
        return head;
    }

    struct node *new_node = GetNode(byte);
    new_node->link = head;
    head = new_node;
    return head;
}

/* Adding the node at the End of the list*/
struct node *Add_AT_End(struct node *head, int byte)
{
    if (head == NULL)
    {
        head = GetNode(byte);
        return head;
    }

    struct node *next_node = GetNode(byte);
    head->link = next_node;
    head = next_node;
    return head;
}

/* Adding the node at perticular position */
struct node *Add_AT_Index(struct node *head, int byte, int Idx)
{
    int count = 1;
    if (head == NULL)
    {
        head = GetNode(byte);
        return head;
    }

    struct node *new_node = GetNode(byte);
    while (count++ < Idx - 1)
    {
        head = head->link;
    }
    struct node *temp = head;
    temp = temp->link;
    head->link = new_node;
    new_node->link = temp;

    /* Returning the end point */
    while (head != NULL)
    {
        head = head->link;
    }
    return head;
}

int main(void)
{
    printf("Linked-List functionality test...\r\n");
    /* Creating the head node */
    struct node *head = NULL;
    struct node *First = NULL;
    head = Add_AT_End(head, 10);
    First = head;
    head = Add_AT_End(head, 20);
    head = Add_AT_End(head, 30);
    head = Add_AT_End(head, 40);
    PrintList(First);
    head = Add_AT_Index(First, 50, 3);
    PrintList(First);
    return 0;
}