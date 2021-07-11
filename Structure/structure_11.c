

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

typedef struct 
{
  uint8_t cmd;
  char *response;
  uint32_t timeout;
}MySensor;


void Send_Sensor(MySensor Sensor_opt[])
{
  for(uint8_t i=0; i<3; i++)
  {
     printf("Command= %02x, response=%s, timeout=%d\r\n", Sensor_opt[i].cmd, Sensor_opt[i].response,Sensor_opt[i].timeout);
  }
}

int main(void )
{
    printf("Passing the structure array to the function arguments...\r\n");
    /* Declaring the array of the structure object */
    /*Designated structure object */
    MySensor Sensor_obj[3] ={
                               {.cmd= 0x53, .response= "OK", .timeout= 1000},
                               {.cmd= 0x10, .response= "OK", .timeout= 1000},
                               {.cmd= 0x08, .response= "OK", .timeout= 1000}
                            };
    
    /* passing the structure array to the function argment*/
    Send_Sensor(Sensor_obj);
    return 0;
}
