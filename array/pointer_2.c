#include <stdio.h>
int main(void)
{
 float x = 12.36;
 printf("%f is stored at %p\r\n", *(&x), &x);
 return 0;
}