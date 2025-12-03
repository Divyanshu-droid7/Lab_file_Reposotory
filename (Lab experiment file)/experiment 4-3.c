#include <stdio.h>

int main() {
    int x = 10;

    printf("Outside block: x = %d\n", x);

    {
        int y = 20;   
        printf("Inside block: y = %d\n", y);
        printf("Inside block: x = %d\n", x); 
    }

    

    printf("Outside block again: x = %d\n", x);

    return 0;
}
