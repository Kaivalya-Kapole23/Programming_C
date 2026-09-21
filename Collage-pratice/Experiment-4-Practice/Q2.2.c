//Develop C program to determine whether agiven number is a perfect nnumber
#include<stdio.h>
int main(){
    int no,i=1,sum=0;
    printf("Enter the number :");
    scanf("%d",&no);
    while (i<no)
        {if (no%i==0)
            sum = sum + i;
            i ++;}
        if (sum == no)
            printf("%d is a perfect number",no);
        else
            printf("%d is not a perfect number",no);
return 0;}
