//program to illustrate a for loop
/*
//program to illustrate a for loop
Author: Stephen mwendwa 
Date:8/10/2024
*/
#include<stdio.h>
int main () { 
   float unit_consumed ,customer_ID, customer_Name;
  //A for execution program 
  for (int i=0;i<8;i++)
  {
  
    printf("Enter customer_ID:\n");
   scanf("%d",&customer_ID);
   printf("Enter customer_Name:\n");
   scanf("%d",& customer_Name);
   printf("Enter unit_consumed:\n");
   scanf("%d",&unit_consumed);
  }
  return 0;
  }
