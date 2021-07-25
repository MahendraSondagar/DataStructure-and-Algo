
#include <stdio.h>
void array_display(int *arr, int size)
{
  for(int i=0; i<size; i++)
  {
      printf("%4d", *(arr+i));
  }
  printf("\r\n");
}


void array_rotate_right(int *arr, int size, int k)
{
    while(k-- > 0)               /* rotate up to k times */
    {
     int temp = *(arr+size-1);   /* Copy the last element */
     for(int i= size-1; i>0; i--)
     {
         *(arr+i) = *(arr+i-1); /* arr[N-1] = arr[N-1-1]*/
     }
     *arr = temp;
    }
     array_display(arr, size);
}
int main(void)
{
    int N;
    printf("Enter the lenght of an array:");
    scanf("%d", &N);
    int arr[N];

    printf("Enter the array element..\r\n");
    for(int i=0; i<N; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    
    array_display(&arr[0], N);
    printf("Rotate right by k times\r\n");
    array_rotate_right(&arr[0], N, 2);

}