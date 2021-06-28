/****************************************************
 DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                   Version 2, December 2021
 
Copyright (C) 2021 Mahendra Sondagar <mahendrasondagar08@gmail.com>
Everyone is permitted to copy and distribute verbatim or modified
copies of this license document, and changing it is allowed as long
as the name is changed.
 
           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
  TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 0. You just DO WHAT THE FUCK YOU WANT TO.
 
 Coded: Sun, 28th June, 2021 / 22:33 PM 
 ****************************************************/


#include <stdio.h>

/* LookUp table of the Error msg*/
static const char *message[]={
  "Unable to get IP",
  "Access point detached!",
  "Modem is not responding",
  "TCP server disconnected",
  "DNS lost",
  "packet lost",
  "Unknown fault"
};

const int msg_size = sizeof(message)/sizeof(char *);
void print_error_msg(size_t num)
{
    if(num >= msg_size)
    {
        /* by default, display the last message */
      printf("%s\r\n", message[msg_size-1]);
    }
    else
    {
       printf("%s\r\n", message[num]);
    }
}
int main(void)
{
    printf("This is the example of the simple lookUp tables of c\r\n");
    print_error_msg(1);
    print_error_msg(3);
    print_error_msg(5);
    print_error_msg(10);
    
    return 0;
}