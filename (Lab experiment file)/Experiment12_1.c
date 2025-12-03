//1.	Write a program to define some constant variable in preprocessor.
#include <stdio.h>
#define PI 3.14159
#define MAX 100

int main() {
    printf("Value of PI: %.2f\n", PI);
    printf("Maximum allowed value: %d\n", MAX);
    int radius = 5;
    double area = PI * radius * radius;
    printf("Area of circle with radius %d: %.2f\n", radius, area);

    return 0;
}
