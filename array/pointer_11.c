#include <stdio.h>

int main(void)
{
    int a[5]={5,7,6,3,10};
    int *ptr = &a[0];

    printf("Value : %d\r\n", *(++ptr));  /* prefix *(add+1*4)*/
    return 0;
}