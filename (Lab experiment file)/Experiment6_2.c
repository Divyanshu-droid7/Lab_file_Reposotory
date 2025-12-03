#include <stdio.h>
int GCD(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    return GCD(num2, num1 % num2);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d", GCD(a, b));

    return 0;
}
