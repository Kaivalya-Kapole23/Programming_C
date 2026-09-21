#include <stdio.h>
int main(){
int n=0,max,min,i=1;
printf("Enter the number: ");
scanf("%d",&n);
max=n;
min=n;
do{
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n>max)
        max=n;
    if (min>n)
        min=n;
    printf("Are you going to conti (1)Yes,(0)No");
    scanf("%d",&i);
}while(i==1);
printf("Max value :%d",max);
printf("Min value :%d",min);
return 0;}
