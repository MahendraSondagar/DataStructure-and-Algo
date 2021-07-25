#include <stdio.h>


void array_display(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%4d", *(arr+i));
    }
    printf("\r\n");
}

void array_arrange(int *arr, int size)
{
 int start =0;
 int end = size-1;
 int temp=0;
 while(start<end)
 {
    if(*(arr+start)<0)
    {
        temp = *(arr+end);
        *(arr+end) = *(arr+start);
        *(arr+start) = end;
    }
    start++;
    end--;
 } 
  array_display(arr, size);
}

int main(void)
{
    /* Arranging the negative numbers at one side */
    int N;
    printf("Enter the lenght of the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the array element\r\n");
    for(int i=0; i<N;i ++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enterd arary elements are...\r\n");
    array_display(&arr[0], N);
    array_arrange(&arr[0], N);

}