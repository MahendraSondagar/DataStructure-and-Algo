#include <stdio.h>

/* Reversing the array using the pointer */
int main(void)
{
    int N=0;
    printf("Enter the array size: ");
    scanf("%d", &N);
    int a[N];
    int *ptr;

    printf("Enter the array element..\r\n");
    for(ptr = a; ptr <= a+N-1; ptr++)
    {
        printf("arr[%p]= ", ptr);
        scanf("%d", ptr);
    }

    printf("Reversing the array order \r\n");
    for(ptr = a+N-1; ptr >= a; ptr-- )
    {
        printf("%4d ", *ptr);
    }
    return 0;
}