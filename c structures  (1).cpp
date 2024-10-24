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
 strcpy(client1.Title,"introducing to c program");
 strcpy(client1.Author,"John Smith");
 client1.Publication_year=2022;
 client1.ISBN=9780131103627;
 client1.price=49.99;
 
 printf("Title:%s\n",client1.Title);
 printf("Author:%s\n",client1.Author);
 printf("Publication year:%f\n", client1.Publication_year);
 printf("ISBN:%d\n",client1.ISBN);
 printf("price:%f\n",client1.price);
 
 return 0;
 
 }