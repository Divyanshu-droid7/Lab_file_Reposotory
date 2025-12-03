#include <stdio.h>

struct complex
{
    float real, imag;
};
struct complex read()
{
    struct complex c;
    scanf("%f %f", &c.real, &c.imag);
    return c;
}
void write(struct complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}
struct complex add(struct complex a, struct complex b)
{
    struct complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}
struct complex subtract(struct complex a, struct complex b)
{
    struct complex r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}

int main()
{
    struct complex c1, c2, sum, diff;

    printf("Enter first complex number (real imag): ");
    c1 = read();

    printf("Enter second complex number (real imag): ");
    c2 = read();

    sum = add(c1, c2);
    diff = subtract(c1, c2);

    printf("Sum: ");
    write(sum);

    printf("Difference: ");
    write(diff);

    return 0;
}
