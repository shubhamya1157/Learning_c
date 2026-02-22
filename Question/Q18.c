#include <stdio.h>

int main() {
    char str[200];
    char ch;
    int n;
    int i = 0, len = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

  
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    printf("Enter character: ");
    scanf(" %c", &ch);   

    printf("Enter n: ");
    scanf("%d", &n);


    if (str[0] == '\0') {
        printf("%s\n", str);
        return 0;
    }


    if (n <= 0) {
        printf("%s\n", str);
        return 0;
    }


    if (n > len) {
        n = len;
    }


    for (i = 0; i < n; i++) {
        str[i] = ch;
    }

    printf("%s\n", str);

    return 0;
}