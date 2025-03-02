/*
program to calculate the fine overdue library books 
Author: Millicent 
Reg No:D33-2459-2023
date:1.3.2025
*/
#include <stdio.h>

//main function 
int main()
{
//variable deceleration
int b;//book ID
int r;//return date
int d;//due date
int n;//days overdue
int fn;//fine amount 
printf("Enter your book ID\n:");
scanf("%d",&b);
printf("Enter return date\n:");
scanf("%d",&r);
printf("Enter due date\n:");
scanf("%d",&d);
n=r-d;
printf("days overdue is%d",n);
if(n>=7){
printf("fn=20");
}
else if("n>7 &n<=14"){
printf("fn=50");
}
else {
printf("fn=100");
}
return 0;
}