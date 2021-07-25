#include <stdio.h>

int main(void)
{
 printf("Designeted array..\r\n");
 int arr[10]={[2]=1, [1]=7, [6]=-1, [9]=5};
 for(int i=0;i <10;i ++)
 {
     printf("arr[%d]=%d\r\n", i, arr[i]);
 }
 return 0;
}