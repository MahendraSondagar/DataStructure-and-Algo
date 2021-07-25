#include <stdio.h>


void array_display(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%4d", *(arr+i));
    }
    printf("\r\n");
}

void sort_ascending(int *arr, int size)
{
    int temp=0;
    for(int i=0; i<size; i++)
    {
            for(int j =i+1; j<size; j++)
            {
                if(*(arr+i)>*(arr+j))
                {
                    temp    = *(arr+i);
                   *(arr+i) = *(arr+j);
                   *(arr+j) = temp;
                }
            }
    }

    array_display(&arr[0], size);
}

void sort_discending(int *arr, int size)
{
    int temp=0;
    for(int i=0; i <size; i++)
    {
       for(int j= i+1; j < size; j++)
       {
           if(*(arr+i)< *(arr+j))
           {
               temp = *(arr+j);
               *(arr+j)= *(arr+i);
               *(arr+i) = temp;
           }
       }
    }

    array_display(&arr[0], size);
}

int main(void)
{
    /* Array sorting asceding discending order */
    int N;
    printf("Enter the array size: \r\n");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the array elements..\r\n");

    for(int i=0; i<N; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enterd array...\r\n");
    array_display(&arr[0], N);
    printf("Sorting in to ascending order...\r\n");
    sort_ascending(&arr[0], N);
    printf("Sorting in discending order...\r\n");
    sort_discending(&arr[0], N);
    
    return 0;
}