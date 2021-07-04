#include <stdio.h>
#include <stdint.h>

/* Cellular commamd structure  */
struct Cellular_Cmd_t
{
  const char *cmd;
  const char *response;
  uint8_t retries;
  uint32_t delay;
};

/*Cellular global command look-up table */

static struct Cellular_cmd_t Cellular_cmd[]=
{
    {"AT",         "OK", 5, 1000},
    {"ATE0",       "OK", 5, 1000},
    {"AT+CACM=?",  "OK", 5, 500},
    {"AT+CAOC=?",  "+CAOC:", 5, 1000},
    {"AT+CSQ?",    "OK", 5, 1000};
}


int main(void)
{

}
