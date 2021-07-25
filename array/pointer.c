#include <stdio.h>
int main(void)
{
    int i=10;        
    int *ptr = &i;                                 /* intiger to pointer (declaring and assigning) */
    printf("%d is stoted at %p\r\n", *ptr, ptr);   /* %p is used to print the hex address */
    return 0;
}