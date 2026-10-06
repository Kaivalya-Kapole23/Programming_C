//Enter a positive number n:6
//6
//6 5
//6 5 4
//6 5 4 3
//6 5 4 3 2
//6 5 4 3 2 1
#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter a positive number n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d\t", n - j + 1);
        }
        printf("\n");
    }

    return 0;
}
