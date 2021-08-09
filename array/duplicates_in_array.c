/* Aim to find the duplicates in the array */
#include <stdio.h>
#include <stdlib.h>

int * Find_Duplicate(int arr[], int size, int *len)
{
    /* Dynamically allocate the memory with the max size of the array */
    int *p = (int *)malloc(sizeof(int)* size);
    int Idx=0;
    if(p!=NULL)
    {
       for(int i=0; i< size; i++)
       {
           for (int j= i+1; j< size; j++ )
           {
               if(arr[i]== arr[j])
               {
                  p[Idx++]= arr[j];
               }
           }
       }
    }
    else
    {
        exit(1);
    }
    *len = Idx;
    return p;
}

void Display_array(int arr[], int size)
{
    for(int i=0; i< size; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\r\n");
}

int main(void)
{
    int lenght=0;
    int arr[]= {2,4,7,2,15,4,6,15,8,10};
    int size= sizeof(arr)/sizeof(arr[0]);

    printf("Displaying the array...\r\n");
    Display_array(arr, size);
    int *duplicate = Find_Duplicate(arr, size, &lenght);
    printf("Duplicate elements from the array are...\r\n");
    for(int i=0; i< lenght; i++)
    {
        printf("%4d", duplicate[i]);
    }
    return 0;

}