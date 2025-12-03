#include <stdio.h>

struct employee
{
    char name[30];
    float basic, gross;
};

int main()
{
    struct employee e[100];
    int i;

    for (i = 0; i < 100; i++)
    {
        printf("\nEmployee %d Name: ", i + 1);
        scanf("%s", e[i].name);

        printf("Basic Pay: ");
        scanf("%f", &e[i].basic);

        e[i].gross = e[i].basic + (0.52 * e[i].basic);
    }

    printf("\nEmployee Name\tGross Salary\n");
    for (i = 0; i < 100; i++)
        printf("%s\t\t%.2f\n", e[i].name, e[i].gross);

    return 0;
}
