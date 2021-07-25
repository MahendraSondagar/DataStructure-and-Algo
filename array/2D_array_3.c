#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int a_raw, a_column, b_raw, b_column;
    printf("2D Matrix multiplication example...\r\n");
    printf("Enter the Array a raws and clolumn\r\n");
    scanf("%d%d", &a_raw, &a_column);
    int a[a_raw][a_column];

    printf("Enter the array a elements..\r\n");
    for(int i=0; i< a_raw; i++)
    {
        for(int j=0; j<a_column; j++)
        {
            printf("a[%d][%d]= ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the array b raws and column\r\n");
    scanf("%d,%d", &b_raw, &b_column);
    int b[b_raw][b_column];

    printf("Enter the array b elements...\r\n");
    for(int i=0;i<a_raw; i++)
    {
        for(int j=0; j< a_column; j++)
        {
            printf("b[%d][%d]= ",i,j);
            scanf("%d", &b[i][j]);
        }
    }

    if(a_raw!= b_column)
    {
      printf("Matrix multiplication won't be possibsle\r\n");
      exit(1);
    }
    else
    {
     for(int i=0; i< a_raw; i++)
     {
         for (int j =0; j< )
     }
    }
    return 0;

}