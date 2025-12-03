#include <stdio.h>

int main()
{
    int a[3] = {10, 20, 30};
    float b[3] = {1.1, 2.2, 3.3};
    char c[3] = {'A', 'B', 'C'};

    int *pi = a;
    float *pf = b;
    char *pc = c;

    printf("Integer pointer:\n");
    printf("Value: %d\n", *pi);
    pi++;
    printf("After increment: %d\n\n", *pi);

    printf("Float pointer:\n");
    printf("Value: %.1f\n", *pf);
    pf++;
    printf("After increment: %.1f\n\n", *pf);

    printf("Char pointer:\n");
    printf("Value: %c\n", *pc);
    pc++;
    printf("After increment: %c\n", *pc);

    return 0;
}
