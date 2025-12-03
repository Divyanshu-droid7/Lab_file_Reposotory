// 1.	Write a program to create a static library for performing arithmetic functions.
#include <stdio.h>
#include "arith.h"

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nResults using static library:\n");
    printf("Addition: %d\n", add(x, y));
    printf("Subtraction: %d\n", sub(x, y));
    printf("Multiplication: %d\n", mul(x, y));
    if(y != 0)
        printf("Division: %d\n", divide(x, y));
    else
        printf("Division: Cannot divide by zero!\n");

    return 0;
}
