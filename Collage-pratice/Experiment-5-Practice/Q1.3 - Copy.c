//3.Write a program to print all prime number from 1 to 100 (use nested loop and break)
#include <stdio.h>

int main() {
    int i,j,is_prime;

    for (i=2;i<=100;i++){
        is_prime = 1;
        for (j=2;j<=i/2;j++) {
            if (i%j==0) {
                is_prime=0;
                break;}
        }
        if (is_prime==1)
            printf("%d is prime\n", i);
    }

    return 0;
}
