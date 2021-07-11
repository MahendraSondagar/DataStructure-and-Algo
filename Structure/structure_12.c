

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


struct MyStruct_t 
{
    int a;
    char c;
    struct MyStruct_t *ptr;  /* Structure pointer which is pointing-out it self*/
};

int main(void)
{
    printf("This is the Example of the Self-Referancing structure\r\n");
    /* Creating the struture object */
    struct MyStruct_t var1;
    struct MyStruct_t var2;

    var1.a= 10;
    var1.c= 'M';
    var1.ptr= NULL;

    var2.a = 20;
    var2.c = 'S';
    var2.ptr= NULL;

    var1.ptr = &var2;        /* Assigning the adrress of the var2 pointer to first struct object*/

    printf("a= %d & c= %c\r\n", var1.ptr->a, var1.ptr->c);
    return 0;

}
