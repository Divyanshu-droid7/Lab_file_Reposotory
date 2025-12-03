#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Triangle is valid.\n");

        if (a == b && b == c)
            printf("It is an Equilateral Triangle.\n");
        else if (a == b || b == c || a == c)
            printf("It is an Isosceles Triangle.\n");
        else if ((a*a + b*b == c*c) ||
                 (a*a + c*c == b*b) ||
                 (b*b + c*c == a*a))
            printf("It is a Right-Angled Triangle.\n");
        else
            printf("It is a Scalene Triangle.\n");

    } else {
        printf("Triangle is NOT valid.\n");
    }

    return 0;
}
