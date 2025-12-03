#include <stdio.h>
long factRec(int n)
{
    if (n == 0)
        return 1;
    return n * factRec(n - 1);
}
long factNonRec(int n)
{
    long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    int n, r;

    printf(" n   r   nCr (using recursive FACT)\n");
    printf("----------------------------------\n");

    for (n = 0; n <= 5; n++)
    {
        for (r = 0; r <= n; r++)
        {
            long ncr = factRec(n) /
                       (factRec(r) * factRec(n - r));
            printf("%2d  %2d   %5ld\n", n, r, ncr);
        }
    }

    printf("\nUsing non-recursive factorial:\n");
    printf(" n   r   nCr\n");
    printf("----------------\n");

    for (n = 0; n <= 5; n++)
    {
        for (r = 0; r <= n; r++)
        {
            long ncr = factNonRec(n) /
                       (factNonRec(r) * factNonRec(n - r));
            printf("%2d  %2d   %5ld\n", n, r, ncr);
        }
    }

    return 0;
}
