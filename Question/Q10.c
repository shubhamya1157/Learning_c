#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int n, i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Enter n: ");
    scanf("%d", &n);

   
    if (n <= 0) {
        while (str2[j] != '\0') {
            result[j] = str2[j];
            j++;
        }
        result[j] = '\0';
    }
    else {

        while (i < n && str1[i] != '\0') {
            result[i] = str1[i];
            i++;
        }


        j = n;


        while (str2[j] != '\0') {
            result[i] = str2[j];
            i++;
            j++;
        }

        result[i] = '\0';
    }

    printf("Result: %s\n", result);

    return 0;
}