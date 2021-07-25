#include <stdio.h>

int main(void)
{
    int arr[5]={12,20,36,10,5};
    int *ptr = &arr[0];
    printf("Value of *(++ptr): %d\r\n", *(++ptr));   /* *(++add)= 2nd location data= *(++1000)= *(1000+ 1*4) =*(1004)= 20*/
    return 0;
}
