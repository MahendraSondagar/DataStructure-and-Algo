#include <stdio.h>

int main(void)
{
    /* using the name of array as a pointer*/
    int a[5];             /* Decalaring the array */
    *(a+1) =12;           /**(a+1)= *(1000+ (1*4))= *(1004)= 12) */
    printf("%d is stored at %p\r\n", *(a+1), (a+1));
    return 0;
}