//2.A program to print the 2-dimensional matrix using a nested loop.
//Enter the number of rows: 3
//Enter the number of columns: 3
#include <stdio.h>
int main(){
int i,j,k=1;
    for (i=1;i<=3;i++){
        for (j=1;j<=3;j++){
        printf("%d\t",k);
        k++;}
        printf("\n");
        }
return 0;}
