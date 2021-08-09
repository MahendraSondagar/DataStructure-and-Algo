 /* Aim to find the kth smallest and kth largest Elemnt form the array*/

 #include <stdio.h>
 #include <stdlib.h>


void Display_array(int arr[], int size)
{
    for(int i=0; i< size; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\r\n");
}

 int * Find_elements(int arr[], int size, int Idx1, int Idx2)
 {
    int *p = (int *) malloc(sizeof(int)*2);
    if(p!=NULL)
    {
        int temp=0;
        /* arranging the array in asscending order */
       for(int i=0 ;i < size; i++)
       {
           for(int j= i+1; j < size; j++)
           {
               if(arr[i]> arr[j])
               {
                  temp= arr[i];
                  arr[i]= arr[j];
                  arr[j]= temp;
               }
           }
       }
       printf("After soring array...\r\n");
       Display_array(arr, size);

       *(p +0)= arr[Idx1];
       *(p+ 1)= arr[Idx2];
       return p;
    }
    else
    {
        exit(1);
    }
 }

 int main(void)
{
  int arr[]= {4,7,5,23,15,14,10,8,-1,0};
  int size = sizeof(arr)/ sizeof(arr[0]);
  int k= 3;  /* 3rd smallest element*/
  int m= 6;  /* 6th largest elemnt */
  int *elements=NULL;
  printf("Displaying the array elemnts...\r\n");
  Display_array(arr, size);
  elements=Find_elements(arr, size, k, m);
  printf("kth smallest :%d & kth largest element: %d\r\n", elements[0], elements[1]);
  return 0;
  
}