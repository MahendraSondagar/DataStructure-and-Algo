#include <stdio.h>

int main(void)
{
    int a[5]={1,5,4,6,3};
    int *ptr;
    int sum =0;

    for( ptr = &a[0]; ptr <= &a[4]; ptr++)
    {
        sum+= *ptr;
    }

    printf("Sum of the array element: %d\r\n", sum);
    return 0;
}