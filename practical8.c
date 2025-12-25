#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to swap two numbers (pass by reference)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print right angle triangle
void printTriangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int choice;

    printf("----- MENU -----\n");
    printf("1. Sum of Digits\n");
    printf("2. Swap Two Numbers\n");
    printf("3. Print Right Angle Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("Sum of digits = %d\n", sumOfDigits(n));
    }
    else if (choice == 2) {
        int x, y;
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        swap(&x, &y);

        printf("After swapping:\n");
        printf("x = %d, y = %d\n", x, y);
    }
    else if (choice == 3) {
        int n;
        printf("Enter height: ");
        scanf("%d", &n);
        printTriangle(n);
    }
    else {
        printf("Invalid choice!");
    }

    return 0;
}