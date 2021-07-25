#include <stdio.h>
void array_display(int *arr, int size)
{
  for(int i=0; i<size; i++)
  {
      printf("%4d", arr[i]);
  }
  printf("\r\n");
}

void array_rotate_left(int *arr, int size, int k)
{
    while(k-- >0 )
    {
       int temp = *arr;               /* Copy the first elemnt of array in to temp */
       for(int i=0; i<size; i++)      /* Traverse from begining as it is left rorate  */
        {
            *(arr+i) = *(arr+i+1);
        }
            *(arr+size-1) = temp;      /* copy first elemnt to the last element place */
    }
   array_display(&arr[0], size);
}

int main(void)
{
  int N;
  int k=0;
  printf("Enter the lenght of an array: ");
  scanf("%d", &N);
  int arr[N];

  printf("Enter the array element...\r\n");
  for(int i=0; i<N; i++)
  {
    printf("arr[%d]= ", i);
    scanf("%d", &arr[i]);
  }  

  array_display(&arr[0], N);
  printf("Rotate array left by k times\r\n");
  array_rotate_left(&arr[0], N, 2);
  return 0;
}