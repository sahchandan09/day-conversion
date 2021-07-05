#include <stdio.h>

int main(void) 
{
  int day,week,month,year;
  printf("Enter the no. of days :");
  scanf("%d",&day);
  week = day/7;
  month =day/30;
  year = day/365;
  printf("\ntotal weeks =%d",week);
  printf("\ntotal month =%d",month);
  printf("\ntotal year =%d",year);
  
  
  
  return 0;
}