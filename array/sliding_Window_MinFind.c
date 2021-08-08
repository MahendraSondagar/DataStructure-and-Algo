#include <stdio.h>
#include <stdlib.h>

/* 
AIM: To find the minimum int from the given sub array 
     using sliding window algoritham
*/

int *SlidingWindow_MinFind(int arr[], int N, int K)
{
int *ptr = (int *)malloc(sizeof(int) * (N-K));
int Cnt=0;
for(int i=0 ;i <=N-K; i++)
  {
      int min = arr[i];
      for(int j= 0; j< K; j++)
      {
          if(arr[i+j]<min)
          {
              min= arr[i+j];
          }
      }
       //printf("min= %4d\r\n", min);
       ptr[Cnt++]= min;
  }
  return ptr;
}
int main(void)
{
  int arr[]= {10,15,-1,0,2,8,15};
  int N= sizeof(arr)/sizeof(arr[0]);
  int K= 2;
  int *result =NULL;
  result= SlidingWindow_MinFind(arr, N,K);  
  for(int i=0; i<N; i++)
  {
      printf("%4d ", result[i]);
  }
  
  return 0;
}