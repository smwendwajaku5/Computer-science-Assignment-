//program for c structures 
/*
//program for c structures
Author: Stephen mwendwa 
Date:20/10/2024
*/
#include<stdio.h>
#include<string.h>
   struct structure {
   char Title[30];
   char Author[30];
   float Publication_year; 
   int ISBN;
   float price;
 } client1;
 
 int main () {
 printf("Enter the Title:\n");
 scanf("%s",&client1.Title);
 
 printf("Enter the Author:\n");
 scanf("%s",& client1.Author);
 
 printf("Enter the Publication_year:\n");
 scanf("%f",&client1.Publication_year);
 
 printf("Enter the ISBN:\n");
 scanf("%d",& client1.ISBN);
 
 printf("Enter the price:\n");
 scanf("%f",&client1.price);
 
 return 0;
 
 }