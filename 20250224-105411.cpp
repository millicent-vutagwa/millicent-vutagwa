/*
Author: Millicent 
Reg No:D33-2459-2023
program to find area of a rectangle 
Date:18.2.2025
*/
# include <stdio.h> //print(),scanf
int main(){
int length =20;
int width =10;
printf("program to find area of a rectangle\n");
printf("Enter the length:\n");
scanf("%d",& length); 
printf("Enter the width:\n");
scanf("%d",& width); 
int area=length×width;
printf("area:%d\n",area);
return 0;// execution successful 
}