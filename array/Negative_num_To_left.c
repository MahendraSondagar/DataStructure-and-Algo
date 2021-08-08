#include <stdio.h>
/*
AIM: Re-arranging the array
     putting all the negative numbers to the left side of the array

*/
int swap(int *a, int *b)
{
   int temp;
   temp = *a;
   *a   = *b;
   *b   = temp;
}

void display_array(int arr[], int size)
{
   for(int i=0; i<size; i++)
   {
      printf("%4d", arr[i]);
   }
}

void arrange_array(int arr[], int size, int start , int end)
{
  while(start < end)
  {
     if(arr[start]>0 && arr[end]<0)
     {
        swap(&arr[start], &arr[end]);
             start ++;
             end--;
     }
     else if(arr[start]>0 && arr[end]>0)
     {
       end--;
     }
     else if(arr[start]<0 && arr[end] <0)
     {
        start++;
     }
     else
     {
        start++;
        end--;
     }
  }
}

int main(void)
{
    int arr[]= {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int N= sizeof(arr)/sizeof(arr[0]);
    arrange_array(arr, N, 0, N-1);
    display_array(arr, N);

    return 0;
}