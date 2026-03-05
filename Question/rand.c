#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100];
    int numbers[6]; 
    int count = 0;

    printf("Input: ");

    if (fgets(input, sizeof(input), stdin) == NULL || input[0] == '\n') {
        printf("Output: Error\n");
        return 0;
    }

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    char *token = strtok(input, ",");
    while (token != NULL && count < 6) {
        while (*token == ' ' || *token == '\t') {
            token++;
        }
        
        char *endptr;
        double val = strtod(token, &endptr);
        
        while (*endptr != '\0') {
            if (*endptr != ' ' && *endptr != '\r') {
                printf("Output: invalid input\n");
                return 0;
            }
            endptr++;
        }

        if (count < 5) {
            numbers[count] = (int)val;
        } else {
            numbers[count] = (int)val; 
        }
        
        count++;
        token = strtok(NULL, ",");
    }

    if (token != NULL) {
        count = 6; 
    }

    if (count < 5) {
        printf("Output: Less than 5 values\n");
        return 0;
    }
    if (count > 5) {
        printf("Output: More than 5 values\n");
        return 0;
    }

    int sum = 0; 
    int *ptr = numbers; 

    for (int i = 0; i < 5; i++) {
        sum = sum + *(ptr + i); 
    }

    printf("Output: %d\n", sum);

    return 0;
}
