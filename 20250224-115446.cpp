/*
Author: Millicent 
Reg No:D33-2459-2023
program to calculate compound interest (CI)
principle=P
time=T
rate=R
Date:18.2.2025
*/
# include <stdio.h> 
#include<math.h>
int main(){
int P;
int T;
int R;
int CI;
printf("program to calculate compound interest \n");
printf("Enter principle (ksh):");
scanf("%d",& P); 
printf("Enter time (years):");
scanf("%d",&T); 
printf("Enter rate (%):");
scanf("%d",&R);
CI=P×(1+R/100,T);
printf("compound interest:%d",CI);
return 0;
}