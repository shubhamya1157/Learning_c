#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char filename[100];

    printf("Enter file name: ");
    scanf("%99s", filename);

    FILE *fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 5; j++) {
            int num = rand() % 100;
            fprintf(fp, "%d", num);
     if (j < 4) {
                fprintf(fp, ",");
            }
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

    printf("File '%s' created successfully with 1000 lines.\n", filename);

    return 0;
}

