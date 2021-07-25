#include <stdio.h>

int main(void)
{
    int arr[5]={1,8,9,6,10};
    int *ptr;       /* int pointer declare*/
    ptr = &arr[0];  /* assigning the add of the first byte of array ex at 1000*/
    ptr = ptr+3;    /* incrimenting add at 3 times i.e 4*3=12= 1012 = *(1012)=6*/
    printf("After incrimenting add 3 times, arr=%d stored at %p\r\n",*ptr, ptr );
    return 0;
} 