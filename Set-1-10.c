#include<stdio.h> 
 int main() 
 { 
   int num,count=0; 
   printf("Enter a number: "); 
   scanf("%d",&num); 
   while(num) 
   { 
     num=num/10; 
     count++; 
   } 
   printf("Total number of digits in a given number is: %d",count); 
   return 0; 
 }
