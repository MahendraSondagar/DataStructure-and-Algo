#include <stdio.h>
#include <stdint.h>

/* Sensor variable structure */
typedef struct 
{
    uint8_t CMD;
    uint8_t response;
    uint8_t retries;
    uint32_t timeout;
    char *process;

}Sensor_opt_t;


/* structure typedef to function */
Sensor_opt_t Sensor_GetReadings(Sensor_opt_t *Sensor_opt)
{

    Sensor_opt->CMD        = 0x80;
    Sensor_opt->response   = 0x56;
    Sensor_opt->retries    = 5;
    Sensor_opt->timeout    = 3000;
    Sensor_opt->process    = "running";
    /* returning the structure from the function */
    return *Sensor_opt;
    /* Reading the sensor data */
}

int main(void)
{
  printf("Returning the structure variable from the function\r\n");
  Sensor_opt_t Sensor_opt = Sensor_GetReadings(&Sensor_opt);

  printf("Command: %02x\r\n",  Sensor_opt.CMD);
  printf("Response: %02x\r\n", Sensor_opt.response);
  printf("Retries: %d\r\n",    Sensor_opt.retries);
  printf("Timeout: %d\r\n",    Sensor_opt.timeout);
  printf("Process: %s\r\n",    Sensor_opt.process);

  return 0;

}