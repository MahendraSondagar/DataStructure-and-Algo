
/****************************************************
 DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                   Version 2, December 2020
 
Copyright (C) 2021 Mahendra Sondagar <mahendrasondagar08@gmail.com>

Everyone is permitted to copy and distribute verbatim or modified
copies of this license document, and changing it is allowed as long
as the name is changed.
 
           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
  TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

 0. You just DO WHAT THE FUCK YOU WANT TO.
 
 Coded: Sun, 11th July 2021 / 18.48 PM 
 ****************************************************/
#include <stdio.h>
#include <stdint.h>

struct GPRS_Command_t
{
   const char *command;
   char *response;
   uint32_t timeout;
   uint8_t retries;
};

void Send_GPRS(struct GPRS_Command_t *GPRS_cmd)
{
   printf("-----------------------------------\r\n");
   printf("comamnd:  %s\r\n", GPRS_cmd->command);
   printf("response: %s\r\n", GPRS_cmd->response);
   printf("timeout:  %d\r\n", GPRS_cmd->timeout);
   printf("retries:  %d\r\n", GPRS_cmd->retries);
   printf("-----------------------------------\r\n");
}

int main(void)
{
  printf("Sending the structure from the function argument\r\n");

  struct GPRS_Command_t GPRS_cmd1 = 
  {
      .command  = "AT+CGREG\r\n",
      .response = "OK\r",
      .timeout  = 1000,
      .retries  = 3
  };
 

 /* Sending the first command */
  Send_GPRS(&GPRS_cmd1);
  return 0;
}

