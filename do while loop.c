//program to illustrate the do while loop 
/*
//program to illustrate the do while loop 
Author: Stephen mwendwa 
Date:9/10/2024
*/
#include<stdio.h>
int main () {
  float customer_ID,customer_Name,unit_consumed;
  int i=2;
  do 
  { 
  printf("Enter customer_ID:\n");
  scanf("%d",&customer_ID);
  printf("Enter customer_Name:\n");
  scanf("%d",& customer_Name);
  printf("Enter unit_consumed:\n");
  scanf("%d",&unit_consumed);
  
  i++;
  }
  while (i=10);
  
  return 0;
  }
