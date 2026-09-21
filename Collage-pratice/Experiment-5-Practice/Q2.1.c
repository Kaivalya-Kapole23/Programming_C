//Enter a positive number n:6
//6
//6 5
//6 5 4
//6 5 4 3
//6 5 4 3 2
//6 5 4 3 2 1
#include <stdio.h>
int main(){
int i,j,n;
printf("Enter the number");
scanf("%d",&n);
for (i=n;i>=1;i--){
    for (j=n;j>=i;j--)
        printf("%d ",j);
    printf("\n");
}
return 0;}
