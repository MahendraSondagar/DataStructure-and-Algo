#include <stdio.h>
#include <stdlib.h>
/*
Finding the largest int from the sub array 
Size N= 7
Sub array K=2
*/

int * slide_window(int arr[], int N, int K)
{
    int max= 0;
    int Cnt=0;
    int *ptr = (int *) malloc((N-K)*sizeof(int));
    for(int i=0; i<= N-K; i++)
    {
        max= arr[i];
       for(int j= 0; j<K; j++)
       {
           if(arr[i+j]>max)
           {
               max= arr[i+j];
           }
       }
       //printf("max= %4d", max);
       ptr[Cnt++] = max;
    }
    return ptr;
}
int main(void)
{
  int arr[]={8,7,9,5,2,12,-1};
  int size = sizeof(arr)/sizeof(arr[0]);
  int K=2;
  int *result=NULL;

  result= slide_window(arr, size, K);
  for(int i=0; i<= size- K; i++)
  {
      printf("%4d", result[i]);
  }
  printf("\r\n");
  return 0;
}