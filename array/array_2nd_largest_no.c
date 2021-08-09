/* Aim to find the 2nd largest No from the given Non sorted array */
#include <stdio.h>

void Display_array(int arr[], int size)
{
    for(int i=0; i< size; i++)
    {
        printf("%4d", arr[i]);
    }
}

int Find_Second_largest(int arr[], int size)
{
  /* Sorting the array in to ascending order */
  int temp=0;
  for(int i=0; i< size; i++)
  {
      for(int j= i+1; j< size; j++)
      {
          if(arr[i]>arr[j])
          {
            temp= arr[i];
            arr[i]= arr[j];
            arr[j]= temp;
          }
      }
  }

  //Display_array(arr, size);
  return (arr[size-2]);
}
int main(void)
{
    int arr[]= {7,4,2,12,36,45,14,85,5,10};
    int size= sizeof(arr)/ sizeof(arr[0]);
    int num = Find_Second_largest(arr, size);
    printf("The second largest no is: %d\r\n", num);
    return 0;
    
}