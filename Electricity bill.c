// program to calculate electricity bill
/*
// program to calculate electricity bill
Author: Stephen mwendwa 
Date :6/10/2024
*/
#include<stdio.h>
#include<math.h>
int main () {
  float customer_ID,customer_Name, unit_consumed,surcharge;
  int charge_per_unit,Amount_To_Pay;
  
  printf("Enter customer_ID :\n");
  scanf("%d",&customer_ID);
  printf("Enter customer_Name :\n");
  scanf("%d",&customer_Name );
  printf("Enter unit_consumed :\n");
  scanf("%d",&unit_consumed);
  
  if (unit_consumed<=199 ){
  charge_per_unit==1.20;
  }else if  (unit_consumed==200<=400){
  charge_per_unit=1.50;
  }else if(unit_consumed==400<=600){
  charge_per_unit==1.80;
  }else if(unit_consumed<=600){
  charge_per_unit==2.00;
  } 
  // formula to calculate Amount to pay 
  Amount_To_Pay==charge_per_unit*unit_consumed ;
  
  if (Amount_To_Pay>=400){
  surcharge==0.15*Amount_To_Pay;
  }else surcharge = 0;
   if (Amount_To_Pay>100){
  printf("Error,Amount should be greater than 100\n");
  }
 
  
  
  
     printf("charge_per_unit:%2d/ksh \n");
     printf("Amount_To_Pay:%2d/ksh \n");
  
  return 0;
  }
   
   
   
