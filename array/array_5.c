#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int N=0;
    int sum =0;
    printf("Array element sum example\r\n");
    printf("Enter the sizeof array...\r\n");
    scanf("%d", &N);

    int *arr = (int *)malloc(N*sizeof(int));
    if(arr!=NULL)
    {
      for(int i=0; i<N;i ++)
      {
          printf("arr[%d]=", i);
          scanf("%d", (arr+i));
      }

      for(int i=0;i <N;i++)
      {
          sum =sum+arr[i];
      }
      printf("Sum of the array element=%d\r\n", sum);
    }
    else
    {
        exit(1);
    }
    return 0;
}