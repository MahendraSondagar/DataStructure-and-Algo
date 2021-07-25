#include <stdio.h>

int main(void)
{
    int N;
    int sum=0;
    printf("Enter the Size of an array: ");
    scanf("%d", &N);
    int arr[N];
    int *ptr = &arr[0];

    printf("Enter the array element\r\n");
    for(int i=0; i<N; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", (ptr+i));
    }

    for(int i=0; i<N;i ++)
    {
     sum+= *(ptr+i);
    }
    printf("Sum of the array element: %d\r\n", sum);
    return 0;
}