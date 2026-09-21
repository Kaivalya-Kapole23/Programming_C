//Enter a positive number n:5
//0
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1
#include <stdio.h>
int main(){
int i,j;
for (i=1;i<=5;i++){
    for (j=1;j<=i;j++)
        if (i%2==0)
        printf("%d ",j%2);
        else
        printf("%d ",(j+1)%2);
    printf("\n");
}
return 0;}
