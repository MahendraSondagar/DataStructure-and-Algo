#include <stdio.h>

/*Return true if byte available with the Index at the ref*/
int Do_Search(int *arr, int size, int byte, int *Idx)
{
  for(int i=0; i< size; i++)
  {
      if(*(arr+i)== byte)
      { 
          *Idx= i;
          return 1;
      }
  }
  return 0;
}

int main(void)
{
  int arr[]={4,7,8,5,12,41,52,63,78,20};
  int MyByte= 41;
  int Index=0;
  int size = sizeof(arr)/sizeof(arr[0]);
  if (Do_Search(&arr[0], size, MyByte, &Index))
  {
     printf("%d is present at %d Index\r\n", MyByte, Index);
  }
  else
  {
     printf("Byte is not present in array\r\n");
  }
  
  return 0;
}