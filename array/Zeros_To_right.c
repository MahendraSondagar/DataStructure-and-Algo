#include <stdio.h>
/*
AIM : arranging the array in a such a manner, that the all zeros lies to right side
      of the array 
*/
void display_array(int arr[], int size)
{
    for(int i=0; i< size; i++)
    {
        printf("%4d", arr[i]);
    }
}

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}

void arrange_array(int arr[], int size, int start, int end)
{
  while(start < end)
  {
      if(arr[start]== 0 && arr[end]!=0)
      {
        swap(&arr[start], &arr[end]); 
        start++;
        end--; 
      }
      else if(arr[start]== 0 && arr[end]==0)
      {
          end--;
      }
      else if(arr[start]!= 0 && arr[end]!=0)
      {
          start++;
      }
      else
      {
          start ++;
          end --;
      }
  }
}

int main(void)
{
    int arr[]={7,8,0,5,0,2,8,7,0,0,12,7};
    int size= sizeof(arr)/sizeof(arr[0]);
    arrange_array(arr, size, 0, size-1);
    display_array(arr, size);
    return 0;
}