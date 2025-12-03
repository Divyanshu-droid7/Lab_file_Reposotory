// 1.	Write a program to apply bitwise OR, AND and NOT operators on bit level.
#include <stdio.h>

int main() {
    unsigned int a = 5;
        unsigned int b = 3;
    printf("a = %d, b = %d\n", a, b);

    
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("~a = %d\n", ~a);      
    printf("~b = %d\n", ~b);      

    return 0;
}
