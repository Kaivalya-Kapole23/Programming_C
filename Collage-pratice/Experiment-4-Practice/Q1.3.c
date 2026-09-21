//Develop a C program to determine the count and sum of all the integers between
//100 to 200
#include <stdio.h>
int main (){
int i,sum=0,count=0;
for (i=100;i<=200;i++){
    if (i%9==0){
    sum+=i;
    count++;}
}
printf("%d\n",sum);
printf("%d",count);
return 0;}
