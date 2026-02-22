// Write a program to count the number of words in a string. 
// Input : ‘hello world’ ; output : 2
// Input : ‘hello world    ’ (white spaces at the end of word)  ; output : 2
// Input: ‘hellon  world’ (multiple white spaces in between should be counted as single word) ; output: 2
// Input : ‘   ‘ (only White spaces) ; Output: 0
// Input: ‘’ (empty string) ; output: 0
// Input: ‘/n’ (escape characters) ; output: 0

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (inWord == 0) { 
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0; 
        }

        i++;
    }

    printf("Number of words: %d\n", count);

    return 0;
}
