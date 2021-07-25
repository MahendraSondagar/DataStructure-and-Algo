#include <stdio.h>
void array_display(int *arr, int size)
{
   for(int i=0; i<size; i ++)
   {
       printf("%4d", *(arr+i));
   }
   printf("\r\n");
}


void array_reverse(int *arr, int size)
{
   int start =0;
   int end   = size-1; 
   int temp;
   /* Simply swapping from last to first element */
   while(start<end)
   {
     temp = *(arr+start);
     *(arr+start)= *(arr+end);
     *(arr+end) = temp;
     start++;
     end--;
   }

   array_display(&arr[0], size);
}
int main(void)
{
    /* Array reverse problem */
    int N;
    printf("Enter the size of an array: ");
    scanf("%d", &N);
    int arr[N];

    printf("Enter the array elements...\r\n");
    for(int i=0; i<N; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    array_display(&arr[0], N);
    printf("Reversing the array elements...\r\n");
    array_reverse(&arr[0], N);
    return 0;
}