#include <stdio.h>
#include <stdint.h>

void array_display(int *arr, int size)
{
   for(int i=0 ;i <size; i++)
   {
       printf("%4d", *(arr+i));
   }
   printf("\r\n");
}

uint8_t array_search(int *arr, int size, int num, int *count)
{
  for(int i=0; i<size; i++)
  {
      if(*(arr+i)==num)
      {
          *count= i;
          return 1;
      }
  }
  return 0;
}
int main(void)
{
    /* array linear serach */
  int N;
  int place=0;
  int num;
  printf("Enter the array Size: ");
  scanf("%d", &N);
  int arr[N];

  printf("Enter the array elemnts...\r\n");
  for(int i=0; i<N; i ++)
  {
      printf("arr[%d]= ", i);
      scanf("%d", &arr[i]);
  }
  
  array_display(&arr[0], N);
  printf("Enter the element that you need to search: ");
  scanf("%d", &num);
  if (array_search(&arr[0], N,num,&place))
  { 
      printf("%d is available at %d place\r\n", num, place);
  }
  else
  {
    printf("Not found!\r\n");
  }
  return 0;
}