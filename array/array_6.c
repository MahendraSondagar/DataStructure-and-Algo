#include <stdio.h>


void Filter_max_min(int arr[], int size, int *max, int *min)
{
   *max= *min=arr[0];

   for(int i=1;i<size; i++)
   {
       if(arr[i]>*max)
       {
           *max= arr[i];
       }

       if(arr[i]< *min)
       {
           *min=arr[i];
       }
   }
}
int main(void)
{
    int N=0;
    int max, min;
    printf("Enter the size of an array..\r\n");
    scanf("%d", &N);
    int arr[N];

    printf("Enter the Array element\r\n");
    for(int i=0; i<N; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr)/sizeof(arr[0]);

    Filter_max_min(arr, size, &max, &min);
    printf("Max=%d, Min=%d\r\n", max, min);
    return 0;
}