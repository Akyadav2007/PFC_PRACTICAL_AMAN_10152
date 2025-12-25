#include <stdio.h>
// Diamond patterrn of length (2n-1)
int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
// Hourglass Pattern of Length (2n − 1)
 int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    for (i = 2; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
//    Alphabet Pattern
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
