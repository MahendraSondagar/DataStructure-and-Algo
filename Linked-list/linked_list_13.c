#include <stdio.h>
#include <stdlib.h>

/* Operational commands */
typedef enum
{
    ADD_AT_END,
    ADD_AT_FRONT,
    ADD_AT_POS,
    DELETE_AT_POS,
    DISPLAY
} Cmd_t;

/* structure node */
struct Node
{
    struct Node *link;
    int data;
    int node_cnt;
};

/* Adding at the end of the list */
struct Node *addAtEnd(struct Node *head)
{
    int byte;
    printf("Enter the byte: ");
    scanf("%d", &byte);
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node != NULL)
    {
        if (head == NULL)
        {
            new_node->data = byte;
            new_node->link = NULL;

            head = new_node;
            head->node_cnt = 0;
            return head;
        }

        struct Node *tp = NULL;
        tp = head;
        new_node->data = byte;
        new_node->link = NULL;

        while (tp->link != NULL)
        {
            tp = tp->link;
        }
        tp->link = new_node;
        head->node_cnt += 1;
        return head;
    }
    return;
}

/* Addding at the front of the list */
struct Node *addAtFront(struct Node *head)
{
    int byte;
    printf("Enter the byte: ");
    scanf("%d", &byte);
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node != NULL)
    {
        if (head == NULL)
        {
            new_node->data = byte;
            new_node->link = NULL;

            head = new_node;
            head->node_cnt = 0;
            return head;
        }
        else
        {
            new_node->data = byte;
            new_node->link = NULL;

            new_node->link = head;
            head = new_node;
            head->node_cnt += 1;
            return head;
        }
    }
    return;
}

/*Adding at the position */
struct Node *addAtPos(struct Node *head)
{
    int byte;
    int pos;
    printf("Enter the byte: ");
    scanf("%d", &byte);
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos > head->node_cnt)
    {
        printf("The position must be < total nodes\r\n");
        exit(1);
    }
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node != NULL)
    {
        if (head == NULL)
        {
            head->node_cnt = 0;
            new_node->data = byte;
            new_node->link = NULL;
            head = new_node;
            head->node_cnt = 0;
            return head;
        }
        else
        {
            struct Node *tp = NULL;
            tp = head;
            new_node->data = byte;
            new_node->link = NULL;

            for (int i = 0; i < pos - 1; i++)
            {
                tp = tp->link;
            }
            struct Node *temp = tp->link;
            tp->link = new_node;
            new_node->link = temp;
            head->node_cnt += 1;
            return head;
        }
    }
    return;
}

/* deleting from the position */
struct Node *delete_node_pos(struct Node *head)
{
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos > head->node_cnt)
    {
        printf("The position must be < total nodes\r\n");
        exit(1);
    }
    if (head == NULL)
    {
        head->node_cnt = 0;
        return 0;
    }
    else
    {
        struct Node *tp = NULL;
        tp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            tp = tp->link;
        }
        struct Node *current = tp;
        struct Node *v_next = tp->link->link;
        struct Node *del = tp->link;
        free(del);

        current->link = v_next;
        head->node_cnt -= 1;
        return head;
    }
}

/*display the list */
void display_node(struct Node *head)
{
    while (head != NULL)
    {
        printf("data: %4d\t", head->data);
        head = head->link;
    }
    printf("\r\n");
}

int main(void)
{

    Cmd_t cmd;
    struct Node *head = NULL;
    struct Node *ptr = NULL;

    while (1)

    {
        printf("-----------------------------------------\r\n");
        printf("0. To add the Node at the end\r\n");
        printf("1. To add the Node at the front\r\n");
        printf("2. To add the Node at the position\r\n");
        printf("3. To delete the Node at the position\r\n");
        printf("4. To add display list\r\n");
        printf("-----------------------------------------\r\n");

        printf("Your Enterd comamnd: ");
        scanf("%d", &cmd);

        switch (cmd)
        {
        case ADD_AT_END:
            /* code */
            head = addAtEnd(head);
            break;

        case ADD_AT_FRONT:
            /* code */
            head = addAtFront(head);
            break;

        case ADD_AT_POS:
            /* code */
            head = addAtPos(head);
            break;

        case DELETE_AT_POS:
            /* code */
            head = delete_node_pos(head);
            break;

        case DISPLAY:
            /* code */
            ptr = head;
            display_node(ptr);
            break;

        default:
            printf("Error\r\n");
            break;
        }
    }

    return 0;
}