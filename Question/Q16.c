// Without using any string.h library functions Write a program to find the first occurrence of a given substring in another string. 
// Input: str = "Hello, world!"; sub = "foo"; output: Substring 'foo' not found in string.
// Input: str = "Hello, world!"; sub= "Hello"; output: Substring 'Hello' found at position 0 in string.
// Input: str = "Hello, world!"; sub = "world!"; Output : Substring 'world!' found at position 7 in string.
// Input: str = "Hello, hello, world!"; sub = "hello"; output: Substring 'hello' found at position 6 in strin


#include <stdio.h>

int main() {
    char str[200], sub[100];
    int i, j, found = 0;

    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);


    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }


    for (i = 0; sub[i] != '\0'; i++) {
        if (sub[i] == '\n') {
            sub[i] = '\0';
            break;
        }
    }


    for (i = 0; str[i] != '\0'; i++) {

        j = 0;

        while (sub[j] != '\0' && str[i + j] == sub[j]) {
            j++;
        }

        if (sub[j] == '\0') {
            printf("Substring '%s' found at position %d in string.\n", sub, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Substring '%s' not found in string.\n", sub);
    }

    return 0;
}