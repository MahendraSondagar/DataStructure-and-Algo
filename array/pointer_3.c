#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *str = "Hello Universe!, I'm geek";
    int count=0;

    while (*str!=NULL)
    {
        count++;
        str++;
    }

    printf("Lenght of the string is :%d\r\n", count);
    return 0;
    
}