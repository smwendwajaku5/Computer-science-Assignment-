//program to calculate compound interest
/*
program to calculate compound interest
Author: Stephen mwendwa
Date:23/9/2024
*/
#include<stdio.h>
int main () {
    float PA,R,T,n,CI,A;

    printf("Enter Principle Amount:");
    scanf("%f",&PA);

    printf("Enter Rate:");
    scanf("%f",&R);

    printf("Enter Time(in years):");
    scanf("%f",&T);

    printf("Enter the  number of times interest is compounded per year:");
    scanf("%f",&n);

//formula to calculate Amount accumulated over the years
    A = PA(1 + R/100*n)^(T*n);

//show results of calculated Amount

    printf("The Amount is :%f\n",&A);

    //formula to calculate compound interest

    CI=A-PA;

//show the total results of calculated compound interest using the formula
    printf("The compound interest is:%f\n",&CI);

    return 0;
}
