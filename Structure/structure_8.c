

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
#include <stdint.h>
#include <stdlib.h>

/* structure of the fucntion pointor */
typedef struct
{
    void (*addition)(int , int);
    void (*subtraction)(int, int);
    void (*multiplication)(int, int);
    void (*division)(int , int);

}Arithmatic_operation_t;

void ADDITION(int a, int b)
{
    printf("Addition: %d\r\n", (a+b));
}

void SUBTRCATION(int a, int b)
{
    printf("Subtraction: %d\r\n", (a-b));
}

void MULTIPLICATION(int a, int b)
{
    printf("Multiplication: %d\r\n", (a*b));
}

void DIVISION(int a, int b)
{
    if(b!=0)
    {
        printf("Division: %f\r\n", (float)(a/b));
    }
    else
    {
        printf("Divided by zero!\r\n");
    }
}
int main(void)
{
    /* Allocating the address to function pointor */
  Arithmatic_operation_t Arth_opt =
  {
    ADDITION,
    SUBTRCATION,
    MULTIPLICATION,
    DIVISION
  };

  printf("Function pointor as a structure variable\r\n");
  int a,b;
  printf("Enter the value of a & b\r\n");
  scanf("%d%d", &a,&b);

  Arth_opt.addition(a,b);
  Arth_opt.subtraction(a,b);
  Arth_opt.multiplication(a,b);
  Arth_opt.division(a,b);
}
