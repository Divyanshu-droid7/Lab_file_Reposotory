#include <stdio.h>

int main() {
    float l1, b1, l2, b2, l3, b3;
    float p1, p2, p3;
    char result;

    printf("Enter length and breadth of rectangle 1: ");
    scanf("%f %f", &l1, &b1);

    printf("Enter length and breadth of rectangle 2: ");
    scanf("%f %f", &l2, &b2);

    printf("Enter length and breadth of rectangle 3: ");
    scanf("%f %f", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    result = (p1 > p2 && p1 > p3) ? '1' :
             (p2 > p1 && p2 > p3) ? '2' : '3';

    printf("Rectangle with highest perimeter is: Rectangle %c\n", result);

    return 0;
}
