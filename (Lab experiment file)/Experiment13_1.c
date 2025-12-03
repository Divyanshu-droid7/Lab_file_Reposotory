// 1.	Write a program to define multiple macro to perform arithmetic functions.
#include <stdio.h>
#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((a) / (b))
int main() {
    int x = 10, y = 5;
    printf("x = %d, y = %d\n", x, y);
    printf("Addition: %d\n", ADD(x, y));
    printf("Subtraction: %d\n", SUB(x, y));
    printf("Multiplication: %d\n", MUL(x, y));
    printf("Division: %d\n", DIV(x, y));

    return 0;
}
