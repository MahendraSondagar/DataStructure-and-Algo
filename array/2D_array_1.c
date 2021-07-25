#include <stdio.h>

int main(void)
{
  
  printf("2D matrix example..\r\n");
  int arr[2][3]={0};

  for(int i=0;i<2;i++)
  {
      for(int j=0;j<3;j++)
      {
          printf("arr[%d][%d]=", i,j);
          scanf("%d", &arr[i][j]);
      }
  }

  printf("Printing the 2D matrix array...\r\n");
  for(int i=0;i<2;i++)
  {
      for(int j=0;j<3;j++)
      {
          printf("%4d\t", arr[i][j]);
      }
      printf("\r\n");
  }
  return 0;
}