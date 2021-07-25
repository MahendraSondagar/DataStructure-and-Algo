#include <stdio.h>

int a[2][3]={0};
int b[2][3]={0};
int c[2][3]={0};

int main(void)
{
  printf("Enter the first matrix\r\n");
  for(int i=0; i<2;i++)
  {
      for(int j=0; j<3;j++)
      {
          printf("a[%d][%d]=", i,j);
          scanf("%d", &a[i][j]);
      }
  }

  printf("Enter the second matrix...\r\n");

  for(int i=0; i<2;i++)
  {
      for(int j=0; j<3;j++)
      {
          printf("b[%d][%d]=", i,j);
          scanf("%d", &b[i][j]);
      }
  }

  printf("Calculating the sum of the matrix...\r\n");

  for(int i=0; i<2;i++)
  {
      for(int j=0; j<3;j++)
      {
         c[i][j]= a[i][j]+b[i][j];
      }
  }

  printf("Final matrix..\r\n");
  for(int i=0; i<2;i++)
  {
      for(int j=0; j<3;j++)
      {
          printf("%4d\t", c[i][j]);
      }
      printf("\r\n");
  }

}