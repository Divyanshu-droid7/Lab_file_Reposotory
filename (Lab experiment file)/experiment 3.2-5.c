#include <stdio.h>

int main() {
    int limit;

    printf("Enter limit: ");
    scanf("%d", &limit);

    for (int num = 1; num <= limit; num++) {
        int count = 0;

        for (int a = 1; a * a * a < num; a++) {
            for (int b = a + 1; a*a*a + b*b*b <= num; b++) {
                if (a*a*a + b*b*b == num)
                    count++;
            }
        }

        if (count >= 2) {
            printf("Ramanujan Number: %d\n", num);
        }
    }

    return 0;
}
