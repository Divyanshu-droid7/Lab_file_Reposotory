#include <stdio.h>

int globalVar = 50;  

void demo() {
    int localVar = 5;   
    printf("Inside demo(): localVar = %d\n", localVar);
    printf("Inside demo(): globalVar = %d\n", globalVar);
}

int main() {
    demo();

    printf("Inside main(): globalVar = %d\n", globalVar);

    return 0;
}
