//Construct the C program to calculate and display the sum of all factors of a given
//positive integer.
#include <stdio.h>
int main (){
    int i,no,sum=0;
    printf("Enter the number :");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
        if (no % i==0)
        sum = sum + i;
    printf("%d",sum);
return 0;}
