

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
 
 /* Designated structure */
#include <stdio.h>

struct RTC_INFO_t 
{
    int hour;
    int minute;
    int second;

    char *day;
    int date;
    int month;
};

int main(void)
{
    /*Statically adding the data */
  struct RTC_INFO_t RTC_Info= { .day= "Monday", .hour=23, .minute=56, .second=56, .date=26, .month=2};
  
  printf("RTC Retrived Info...\r\n");
  printf("------------------------------\r\n");
  printf("Hour:                       %d\r\n", RTC_Info.hour);
  printf("Minute:                     %d\r\n", RTC_Info.minute);
  printf("Second:                     %d\r\n", RTC_Info.second);
  printf("Day:                        %s\r\n", RTC_Info.day);
  printf("Date:                       %d\r\n", RTC_Info.date);
  printf("Month:                      %d\r\n", RTC_Info.month);
  printf("------------------------------\r\n");
  
  return 0;
}
