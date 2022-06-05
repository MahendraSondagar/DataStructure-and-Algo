#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    struct Node *next;
    int node_cnt;
    int data;
};

typedef enum
{
    ADD_AT_END,
    ADD_AT_FRONT,
    ADD_AT_POS,
    DELETE_AT_POS,
    DISPLAY
} Cmd_t;

struct Node *addAtEnd(struct Node *head)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    int byte;
    printf("Enter the Byte: ");
    scanf("%d", &byte);
    if (new_node != NULL)
    {

        new_node->data = byte;
        new_node->next = NULL;
        new_node->prev = NULL;
        if (head == NULL)
        {

            head = new_node;
            head->node_cnt = 0;
            return head;
        }
        else
        {
            struct Node *tp = NULL;
            tp = head;
            while (tp->next != NULL)
            {
                tp = tp->next;
            }

            tp->next = new_node;
            new_node->prev = tp;
            head->node_cnt += 1;
            return head;
        }
    }
    return 0;
}

struct Node *addAtFront(struct Node *head)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    int byte;
    printf("Enter the Byte: ");
    scanf("%d", &byte);
    if (new_node != NULL)
    {
        new_node->data = byte;
        new_node->next = NULL;
        new_node->prev = NULL;

        if (head == NULL)
        {
            head = new_node;
            head->node_cnt = 0;
            return head;
        }
        else
        {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
            head->node_cnt += 1;
            return head;
        }
    }
    return 0;
}

struct Node *addAtPos(struct Node *head)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    int byte, pos;
    printf("Enter the Byte: ");
    scanf("%d", &byte);
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos > head->node_cnt)
    {
        printf("pls. Enter the position < nodes count\r\n");
        exit(1);
    }
    if (new_node != NULL)
    {
        new_node->data = byte;
        new_node->next = NULL;
        new_node->prev = NULL;

        if (head == NULL)
        {
            head = new_node;
            return head;
        }
        else
        {
            struct Node *tp = NULL;
            tp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                tp = tp->next;
            }
            struct Node *current_pos = tp;
            struct Node *next_pos = tp->next;

            current_pos->next = new_node;
            new_node->prev = current_pos;

            new_node->next = next_pos;
            next_pos->prev = new_node;
            return head;
        }
    }
    return 0;
}

struct Node *delete_node(struct Node *head)
{
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos > head->node_cnt)
    {
        printf("pls. Enter the position < nodes count\r\n");
        exit(1);
    }

    if (head == NULL)
    {
        return head;
    }
    else
    {
        struct Node *tp = NULL;
        struct Node *current_pos = NULL;
        struct Node *last_pos = NULL;

        tp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            tp = tp->next;
        }
        current_pos = tp->next;
        last_pos = tp->next->next;
        free(current_pos);

        tp->next = last_pos;
        last_pos->prev = tp;

        return head;
    }
}

void display_list(struct Node *head)
{
    while (head != NULL)
    {
        printf("data: %d\t", head->data);
        head = head->next;
    }
    printf("\r\n");
}

int main(void)
{
    struct Node *head = NULL;
    struct Node *ptr = NULL;
    Cmd_t cmd;

    while (1)
    {
        /* code */
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
            head = addAtPos(head);
            /* code */
            break;

        case DELETE_AT_POS:
            /* code */
            head = delete_node(head);
            break;

        case DISPLAY:
            /* code */
            ptr = head;
            display_list(ptr);
            break;

        default:
            printf("Error!\r\n");
            break;
        }
    }

    return 0;
}