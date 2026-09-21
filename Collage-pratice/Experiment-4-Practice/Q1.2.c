//Implement a C program to calculate the value of a^b, where a is the base and b is
//non-negative integer exponent, without using the standard library function pow().
//Use an appropriate loop.
#include <stdio.h>
int main(){
    int base,pow,multi=1,i=1;
    printf("Enter the base value ");
    scanf("%d",&base);
    printf("\nEnter the power value ");
    scanf("%d",&pow);
    while (i<=pow){
        multi=multi*base;
        i++;}
    printf("a^b = %d",multi);
return 0;}
