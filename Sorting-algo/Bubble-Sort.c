#include <stdio.h>

void display_arr(int arr[], int size)
{
    for (int i=0; i< size; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\r\n");
}

void sort_ascending(int arr[], int size)
{
    int temp=0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }

    display_arr(arr, size);
}

void sort_descending(int arr[], int size)
{
    int temp;
    for(int i=0; i< size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if(arr[i]<arr[j])
            {
                temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    display_arr(arr, size);
}
int main(void)
{
   int arr[]= {7,0,4,12,3,52,89,41,8,-1};
   int size = sizeof(arr)/sizeof(arr[0]);
   printf("Original array...\r\n");
   display_arr(arr, size);
   printf("Sorting ascending order...\r\n");
   sort_ascending(arr, size);
   printf("Sorting descending order...\r\n");
   sort_descending(arr, size);
   return 0;
}