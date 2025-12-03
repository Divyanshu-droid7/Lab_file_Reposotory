#include <stdio.h>

int globalVar = 10; 

void display() {
    printf("Inside display(): globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);
    display();

    globalVar = 20;  
    printf("Inside main() after modification: globalVar = %d\n", globalVar);

    return 0;
}
