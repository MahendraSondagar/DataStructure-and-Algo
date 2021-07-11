
/****************************************************
 DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                   Version 2, December 2020
 
Copyright (C) 2021 Mahendra Sondagar <mahendrasondagar08@gmail.com>

Everyone is permitted to copy and distribute verbatim or modified
copies of this license document, and changing it is allowed as long
as the name is changed.
 
           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
  TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

 0. You just DO WHAT THE FUCK YOU WANT TO.
 
 Coded: Sun, 11th July 2021 / 18.48 PM 
 ****************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int a;
    int b;
}MyStruct_t;


MyStruct_t *Get_Struct(int x,int y)
{
    /* Dynamically allocating the  memory to structure pointer*/
   MyStruct_t *struct_opt = (MyStruct_t*)malloc(sizeof(MyStruct_t));
   struct_opt->a = x;
   struct_opt->b = y+10;
   return struct_opt;
}

void print_struct(MyStruct_t *obj)
{
  printf("output = %d %d\r\n", obj->a, obj->b);
}


int main(void)
{
    printf("Returning the structure pointer from the function...\r\n");
    MyStruct_t *obj = Get_Struct(10,20); 
    print_struct(obj);
    /* Free structure object memory */
    free(obj);
    return 0;
        
}
