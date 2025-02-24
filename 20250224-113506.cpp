/*
Author: Millicent 
Reg No:D33-2459-2023
program to calculate simple interest (SI)
principle=P
time=T
rate=R
Date:18.2.2025
*/
# include <stdio.h> 
int main(){
int P;
int T;
int R;
int SI;
printf("program to calculate simple interest \n");
printf("Enter principle P\n");
scanf("%d",& P); 
printf("Enter time T\n");
scanf("%d",&T); 
printf("Enter rate R\n");
scanf("%d",&R);
SI=P×R/100×T;
printf("simple interest:%d",SI);
return 0;
}