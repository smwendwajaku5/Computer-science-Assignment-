//program to check whether someone qualifies for a loan 
/*
program to check Qualifications for a loan 
Author: Stephen mwendwa 
Date: 30/9/2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int age, income;

    // Loan eligibility check
    printf("Enter your age :");
    scanf("%d", &age);
    
    printf("Enter income:");
    scanf("%d",&income);

    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan \n unfortunately we are unable to offer you loan at this time ");
    }
    if ( age <=21 && income <=21000) {
        printf("sorry you don't qualify for a loan");
    }
  
     return 0;
     
}         
