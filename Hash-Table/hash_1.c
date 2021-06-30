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
 
 Coded: Sun, 30th June, 2021 / 21:48 PM 
 ****************************************************/
 
/* Basic has table with without collison avoidance */ 
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

/* Basic hash table uisng array */
#define MENU        "--------------------------------\r\n" \
                    "         Hash Table Menu        \r\n" \
                    "1. Insert the Data              \r\n" \
                    "2. Delete the data              \r\n" \
                    "3. Serach the data              \r\n" \
                    "4. Display the table            \r\n" \
                    "--------------------------------\r\n"

/* Creating the has data structure*/
struct Hash_table_t
{
    int key;
    int *data;
};

/* Creating the hash table*/
struct Hash_table_t *Hash_init()
{
    struct Hash_table_t *hash = (struct Hash_table_t*)malloc(sizeof(struct Hash_table_t));
    hash->data = (int *)malloc(sizeof(int)* SIZE);

    for (int idx=0; idx< SIZE; idx++)
    {
        /* initially empty value = -1*/
       *(hash->data + idx)= -1;
    }
    return hash;
}

/* inserting the values in to the table */
void Hash_insert(struct Hash_table_t *hash, int byte)
{

    hash->key = byte % SIZE;
    if(hash->key<= SIZE)
    {
        printf("Table [%d]-> %d\r\n", byte, hash->key);
        hash->data[hash->key]= byte;
    }
    else
    {
        printf("please enter the data <%d\r\n", SIZE);
    }
    
}

/* Displaying the entire table */
void Hash_display(struct Hash_table_t *hash)
{
    for (int idx =0 ; idx < SIZE; idx++)
    {
        printf("Table [%d]-> %d\r\n", idx, *(hash->data + idx));
    }
}

/* Deleting the table element */
void Hash_delete(struct Hash_table_t *hash, int data)
{
     hash->key = data % SIZE;
     if( *(hash->data + hash->key)==-1)
     {
         printf("No data found in to the table!\r\n");
     }
    *(hash->data + hash->key) = -1;
}

/* Searching the index of the element */
void Hash_search(struct Hash_table_t * hash, int data)
{
     hash->key = data % SIZE;
     if(*(hash->data + hash->key)== data)
     {
         printf("%d found at %d\r\n", data, hash->key);
     }
     else
     {
         printf("%d is not found in to the table!\r\n", data);
     }
}


int main(void)
{
  struct Hash_table_t *hash  = Hash_init();
  unsigned int cmd;
  int data;

  for(;;)
  {
    printf("%s", MENU);
    scanf("%d", &cmd);
    switch (cmd)
    {
    case 1:
        printf("Insert the data : ");
        scanf("%d", &data);
        Hash_insert(hash, data);
        break;
    
    case 2:
        printf("Delete the data: ");
        scanf("%d", &data);
        Hash_delete(hash, data);
        break;

    case 3:
        printf("Search the element: ");
        scanf("%d", &data);
        Hash_search(hash, data);
        break;

    case 4:
        printf("Display the hash table\r\n");
        Hash_display(hash);
        break;

    default:
        printf("Error!\r\n");
        break;
    }
  }
  return 0;
}
