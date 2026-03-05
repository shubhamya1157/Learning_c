#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int n, i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Enter n: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Output: %s\n", str2);
        return 0;
    }

   
    while (i < n && str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }

    printf("Output: %s\n", str2);

    return 0;
}
