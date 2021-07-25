#include <stdio.h>
#define Capacity 100

/* Display the array */
void display_array(int arr[], int size)
{
    printf("\r\nDisplaying array element \r\n");
    for(int i=0; i< size; i ++)
    {
        printf("%4d", arr[i]);
    }
}

int insert_array(int arr[], int size, int index, int element)
{
    if(size> Capacity)
    {
        return -1;
    }
    if(index< size)
    {
      for(int i= size-1; i>=index; i--)
      {
          arr[i+1]= arr[i];
      }
      arr[index]= element;
    }
    else
    {
       arr[size+1]= element;
    }
    return 1;
}

/* Deleting the element */
int delete_element(int arr[], int size, int index)
{
     if(index > size)
     {
         return -1;
     }
     else
     {
         for(int i= 0; i< size; i++)
         {
               if(i>= index)
               {
                  arr[i] = arr[i+1];   
               } 
         } 
     }
}

int main(void)
{
   int arr[Capacity]= {1,5,4,7,8};
   int element =12;
   int index= 3;
   int size = 5;
   printf("Array size: %d\r\n", size);
   display_array(arr, 5);

   if(insert_array(arr, size, index, 12)>0)
   {
       printf("\r\nArray elemnt has been inserted!\r\n");
   }
   display_array(arr, size+1);
   delete_element(arr, size, 2);
   display_array(arr, size);

   return 0;
}