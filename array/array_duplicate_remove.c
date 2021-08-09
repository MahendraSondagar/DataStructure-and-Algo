/* Aim to remove duplicate from the given array */

#include <stdio.h>


void Remove_duplicate(int arr[], int size)
{
  for(int i=0; i <size; i++)
  {
      for (int j=i+1; j < size; j++)
      {
         if(arr[i]== arr[j])
         {
             for(int k= j; k<size; k++)
             {
                 arr[k]= arr[k+1];
             }
             size--;
             j--;
         }
      }
  }
    printf("After removing duplicate...\r\n");
    Display_array(arr, size);
}

void Display_array(int arr[], int size)
{
    for(int i=0; i< size; i++)
    {
        printf("%4d", arr[i]);
    }
}

int main(void)
{
    int arr[]= {1,5,4,1,2,6,12,6,8,5};
    int size =  sizeof(arr)/ sizeof(arr[0]);
    printf("Before removing duplicate...\r\n");
    Display_array(arr, size);
    Remove_duplicate(arr, size);
    return 0;
}
