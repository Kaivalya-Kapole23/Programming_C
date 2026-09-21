//2.A program to print the 2-dimensional matrix using a nested loop.
//Enter the number of rows: 3
//Enter the number of columns: 3
#include <stdio.h>
int main(){
int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d\t",i*3+j+1);}
        printf("\n");}
    return 0;}
