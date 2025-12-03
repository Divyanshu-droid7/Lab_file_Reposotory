// 2.	Write a program to use static library in other program.
#include <stdio.h>
#include "arith.h" 

int main() {
    int a = 7, b = 3;

    printf("Using static library:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    printf("Multiplication: %d\n", mul(a, b));
    if(b != 0)
        printf("Division: %d\n", divide(a, b));
    else
        printf("Division: Cannot divide by zero!\n");

    return 0;
}
