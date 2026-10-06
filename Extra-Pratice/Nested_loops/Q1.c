/*
    *
   * *
  *   *
 *     *
*********
*/
#include <stdio.h>

int main() {
    int n = 5;
    int i, j;
    for (i = 1; i < n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        printf("*");
        for (j = 1; j <= ((2 * i) - 3); j++)
            printf(" ");
        if (j > 1)
            printf("*");
        printf("\n");
    }
    for (j = 1; j <= (2 * n - 1); j++)
        printf("*");
    printf("\n");
    return 0;
}
