#include <stdio.h>

int main(void)
{
 /* pointer incriment (postfix )*/
 int a[5]= {4,7,5,2,6};
 int *ptr = &a[0];
 printf("value : %d\r\n", *(ptr++));    /* *(add +1) = *(1000+ 1*4)*/
 printf("value : %d\r\n", *ptr);
 return 0;   
}