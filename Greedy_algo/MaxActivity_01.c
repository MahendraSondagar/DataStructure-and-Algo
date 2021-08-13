/*Aim to print out the maximum activity that can  be perform within the time frame*/
/* The start time and end time are alredy sorted */
#include <stdio.h>

void print_activity(int start[], int end[], int size)
{
  int j=1;
  int i=0;
  printf("Performed activities are ...\r\n");
  for(int j= 1; j< size; j++)
  {
     if(start[j]<= end[i])
     {
         printf("[%d]\t", j);
         i=j;
     }
  }
}

int main(void)
{
  int start_time[] ={1, 3, 0, 5, 8, 5};
  int end_time[]  = {2, 4, 6, 7, 9, 9};
  int size = sizeof(start_time)/sizeof(start_time[0]);
  print_activity(start_time, end_time, size);
  return 0;
}