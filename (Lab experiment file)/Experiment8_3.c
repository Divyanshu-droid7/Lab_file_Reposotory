#include <stdio.h>
void modify(int *x, float *y)
{
    *x = *x + 10;
    *y = *y * 2;
}

int main()
{
    int a = 5;
    float b = 2.5;

    printf("Before function:\n");
    printf("a = %d, b = %.2f\n", a, b);

    modify(&a, &b);  
    printf("After function:\n");
    printf("a = %d, b = %.2f\n", a, b);

    return 0;
}
 