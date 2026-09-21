//Enter a positive number n:5
//1 1 1 1 1
//1 0 0 0 1
//1 0 0 0 1
//1 1 1 1 1
#include <stdio.h>
int main(){
int i,j;
for (i=1;i<=4;i++){
    for (j=1;j<=5;j++){
        if (i==1 || i==4)
            printf("1 ");
        else if (j==1 || j==5)
            printf("1 ");
        else
            printf("0 ");
    }
    printf("\n");
}
return 0;}
