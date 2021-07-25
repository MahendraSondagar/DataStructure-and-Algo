#include <stdio.h>

int *Mid_array(int arr[], int size)
{
   return &arr[size/2];
}
int main(void)
{
    printf("Function, returning the pointers\r\n");
    int arr[6]= {1,2,40,50,100,120};
    int *mid= Mid_array(arr, 6);
    printf("Mid of the array is:%d\r\n", *mid);
    return 0;

}