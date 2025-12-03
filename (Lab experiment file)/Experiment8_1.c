#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *p = &a;
    float *q = &b;
    char *r = &c;

    printf("Integer value: %d\n", a);
    printf("Integer pointer value: %d\n\n", *p);

    printf("Float value: %.2f\n", b);
    printf("Float pointer value: %.2f\n\n", *q);

    printf("Char value: %c\n", c);
    printf("Char pointer value: %c\n", *r);

    return 0;
}
