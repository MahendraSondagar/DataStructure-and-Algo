#include <stdio.h>


void Array_Sum(int *ptr, int size, int *sum)
{
    for(int i=0; i<size; i++)
    {
        *sum+= *(ptr+i);    /* *(add+ i) */
    }
}

int main(void)
{
    /* passing the array to the function argument with as an array */
    int N;
    int sum =0;
    printf("Enter the lenght of the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the array element\r\n");
    for(int i=0; i<N; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr)/sizeof(arr[0]);
    Array_Sum(&arr[0], size, &sum);          /* or Array_Sum(arr, size, &sum); */
    printf("Sum of the array: %d\r\n", sum);
    return 0;
    
}