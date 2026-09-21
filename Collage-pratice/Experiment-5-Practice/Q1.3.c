//3.Write a program to print all prime number from 1 to 100 (use nested loop and break)
#include <stdio.h>
int main(){
int i,j,k;
for (i=2;i<=100;i++){
    k=1;
    for (j=2;j<=(i/2);j++){
        if (i%j==0){
            k=0;
            break;}
    }
    if(k=1)
        printf("The %d is prime number.\n",i);
}
return 0;}
