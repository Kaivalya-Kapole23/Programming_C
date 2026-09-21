#include <stdio.h>
int main(){
int i,sum=0,count=0;
for(i=100;i<=200;i++)
    if (i%9==0){
        sum = sum + i;
        count ++;
    }
printf("The total count = %d\n",count);
printf("Sum of all the integers divisible by 9 between 100 to 200 is %d",sum);
return 0;}
