#include <stdio.h>
#include <stdint.h>


uint8_t find_repeated(int num)
{
    int found[10]={0};  /*init seen digits as zero array */
    int ret=0;
    while(num!=0)
    {
        int rem = num%10;
        if(found[rem]==1) /* if found 1 then break the loop*/
        {
            ret =1;
            break;
        }
        found[rem]=1;   /* putting 1 at the digits index */
        num =num/10;
    }
    return ret;
}

int main(void)
{

    printf("Find the repeated digits in to the bumber...\r\n");
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    if(find_repeated(num))
    {
      printf("repeated digits found!\r\n");
    }
    else
    {
     printf("repeated digits not found\r\n");
    }
    
}


