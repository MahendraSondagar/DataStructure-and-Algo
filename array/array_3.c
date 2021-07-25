#include <stdio.h>

int main(void)
{
 printf("Designeted array..\r\n");
 int arr[]={[2]=1, [1]=7, [6]=-1, [9]=5};   //max lenght of the array = max. designator +1
 for(int i=0;i <10;i ++)
 {
     printf("arr[%d]=%d\r\n", i, arr[i]);
 }
 return 0;
}