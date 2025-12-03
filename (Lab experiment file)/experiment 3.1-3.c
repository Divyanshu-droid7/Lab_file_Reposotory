#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter x1 y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter x3 y3: ");
    scanf("%f %f", &x3, &y3);

    if ((x2 - x1)*(y3 - y1) == (y2 - y1)*(x3 - x1))
        printf("Points are collinear.\n");
    else
        printf("Points are NOT collinear.\n");

    return 0;
}
