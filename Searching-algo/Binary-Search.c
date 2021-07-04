#include <stdio.h>


int Do_BinarySearch(int *arr, int size, int start, int end, int byte, int *Index)
{
   while(start <=end)
   {
       /* Finding the mid of the array */
       int mid= start +(end-start)/2;
       if((*(arr+mid))==byte)
       {
           *Index = mid;
          return 1;
       }

       if(*(arr+mid)<byte)
       {
           /* if byte lies in to the right part of the array */
           start = mid-1;
       }
       else
       {
           /*if byte lies in to the left part of the array  */
           end = mid-1;
       }
   }
   return 0;
}
int main(void)
{
    int arr[]={0,2,3,7,8,10,20,25,30,35};
    int size= sizeof(arr)/sizeof(arr[0]);
    int MyByte = 25;
    int Index=0;
    if(Do_BinarySearch(&arr[0], size, 0, size-1, MyByte, &Index))
    {
        printf("%d found at Index : %d\r\n", MyByte, Index);
    }
    else
    {
        printf("%d is not present in to the array\r\n", MyByte);
    }
    return 0;
}