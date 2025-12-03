// 2.	Write a program to define a function in directives.
#include <stdio.h>
#define SQUARE(x) ((x) * (x))
int main() {
    int num = 5;
    printf("Number: %d\n", num);
    printf("Square using macro: %d\n", SQUARE(num));
    printf("Square of 10: %d\n", SQUARE(10));

    return 0;
}
