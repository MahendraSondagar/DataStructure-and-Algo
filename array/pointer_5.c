#include <stdio.h>

int main(void)
{
    /* using the name of the array as a pointer */
    int a[5];    /* Declaring the array */
    *a= 10;      /* Assigning the data to the first elemnt of the array *(1000)=10*/
    printf("%d stored at %p\r\n", a[0], &a[0]);
    return 0;

}