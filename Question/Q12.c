// Without using any string.h library functions Write a program to compare first n characters of two strings.
// Input : str1 = “\n”, str2 = “\n”, n=5;  Output :” Invalid Input”, 
// Input : str1 = "Hello", str2 = "Help"; n = 3 ; output : 0,
// Input : str1 = "Hello", str2 = "Help"; n = 4 ; output : -4  
// Input : char str1[] = "Hello"; char str2[] = "Hello, world!"; n = 5 
// output : 0, Input : char str1[] = "Hello"; char str2[] = "Hello, world!";
// n = 7 output : “Length of string 1 is less than n”

#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int n, i = 0, len1 = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("Enter n: ");
    scanf("%d", &n);


    if (str1[0] == '\n' && str2[0] == '\n') {
        printf("Invalid Input\n");
        return 0;
    }


    while (str1[len1] != '\0' && str1[len1] != '\n') {
        len1++;
    }


    if (len1 < n) {
        printf("Length of string 1 is less than n\n");
        return 0;
    }


    for (i = 0; i < n; i++) {
        if (str1[i] != str2[i]) {
            printf("%d\n", str1[i] - str2[i]);
            return 0;
        }
    }


    printf("0\n");

    return 0;
}