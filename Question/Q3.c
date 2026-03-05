
#include <stdio.h>

#include <stdlib.h>

#define EXPECTED_LINES 1000

#define TEMP_FILE "temp_output.txt"

int main(void) {

    char filename[100];

    printf("Enter input file name: ");

    if (scanf("%99s", filename) != 1) {

        printf("Invalid filename input.\n");

        return 1;

    }

    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {

        perror("Error opening input file");

        return 1;

    }

    FILE *out = fopen(TEMP_FILE, "w");

    if (out == NULL) {

        perror("Error creating temporary file");

        fclose(fp);

        return 1;

    }

    int a, b, c, d, e;

    int lineCount = 0;

    while (1) {

        int result = fscanf(fp, "%d,%d,%d,%d,%d", &a, &b, &c, &d, &e);

        if (result == EOF) {

            break;

        }

        if (result != 5) {

            printf("Invalid file format detected at line %d.\n", lineCount + 1);

            fclose(fp);

            fclose(out);

            remove(TEMP_FILE);

            return 1;

        }

        

        fprintf(out, "%d\n", a + b + c + d + e);

        lineCount++;

    }

    fclose(fp);

    fclose(out);

    if (lineCount != EXPECTED_LINES) {

        printf("Invalid file: Found %d lines, expected %d.\n", lineCount, EXPECTED_LINES);

        remove(TEMP_FILE);

        return 1;

    }

    if (remove(filename) != 0) {

        perror("Error removing original file");

        remove(TEMP_FILE);

        return 1;

    }

    if (rename(TEMP_FILE, filename) != 0) {

        perror("Error replacing original file");

        return 1;

    }

    printf("Sum file created successfully.\n");

    return 0;

}
