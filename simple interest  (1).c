//program to calculate simple interest
/*
program to calculate simple interest
Author: Stephen mwendwa
Date:21/9/2024
*/
//preprocessor directive printf(), scanf()
#include<stdio.h>
int main () {
    float p,r,t,I;

    printf("Enter Principle:");
    scanf("%f",&p);

    printf("Enter Rate: ");
    scanf("%f",&r);

    printf("Enter Time(in years):");
    scanf("%f",&t);

//formula to calculate simple interest

   I=(p*r*t)/100;
   
 // show results of calculated data 
 
    printf("simple interest is:%f\n",&I);
    
    
    return 0;
}
