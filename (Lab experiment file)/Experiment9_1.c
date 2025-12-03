#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("myfile.txt", "w");
   if (fp == NULL) {
        printf("File could not be created.\n");
        return 1;
    }
   fprintf(fp, "Hello, this text is written to the file using C.\n");
    fprintf(fp, "File handling in C is easy.\n");
    fclose(fp);

    printf("File created and text written successfully.\n");
    return 0;
}
