#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int size = 0;
  int sum =0;
  printf("Enter the array size...\r\n");
  scanf("%d", &size);
  int *arr = (int *)malloc(size*sizeof(int));
  for(int i=0; i <size; i++)
  {
      printf("arr[%d]=", i);
      scanf("%d", (arr+i));
  }

  for(int i=0; i<size; i ++)
  {
      sum =sum+ *(arr+i);
  }
  printf("Sum of the array: %d\r\n", sum);
  return 0;
}