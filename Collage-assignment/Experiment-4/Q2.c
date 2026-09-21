#include <stdio.h>

int main(){
    int no, i=1, sum=0;
    printf("Enter the number :");
    scanf("%d",&no);
    while(i <= no){
        if(no % i == 0)   // check if i is a factor of no
            sum += i;
        i++;
    }
    printf("The sum of all the factors of %d is %d.", no, sum);
    return 0;
}
