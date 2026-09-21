//Develop a C program that computes and displays the separate sums of all even numbers
//and all odd numbers between 1 and N(inclusive).
#include <stdio.h>
int main(){
    int n,sum_eve=0,sum_odd=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i=1; i <= n; i++)
        if (i%2==0)
            sum_eve= sum_eve + i;
        else
            sum_odd=sum_odd + i;
    printf("\nThe sum of all the even number %d\n",sum_eve);
    printf("The sum of all the odd number %d\n",sum_odd);
return 0;}
