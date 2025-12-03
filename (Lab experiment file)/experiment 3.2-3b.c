#include <stdio.h>

int main() {
    int row, col, n = 5;
    int arr[10][10];

    for (row = 0; row < n; row++) {
        for (col = 0; col <= row; col++) {
            if (col == 0 || col == row)
                arr[row][col] = 1;
            else
                arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
            
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }

    return 0;
}
