// Without using any string.h library functions Write a program to Compare two strings without regard to case. 
// Input: str1 =  "aBcDe", str2  =  "abcde"  output : 0;
// Input : str1 = “\n”; char, str2 = “\n”; Output : 0,
// Input : str1 = "Hello", str2 = "hello, world!"; 
// output : -12;  Input : str1 = "Hello, world!", 
// str2 = "Hello World!"; output : 12,  
// Input : str1 = "HELLO", str2=”hello,”(ASCII value of , is 44) Output: -44


#include<stdio.h>

int main() {

    char str1[1000], str2[1000];
    int i = 0;
    char c1, c2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str2[i] != '\0') {

        c1 = str1[i];
        c2 = str2[i];


        if (c1 >= 'A' && c1 <= 'Z')
            c1 = c1 + 32;

        if (c2 >= 'A' && c2 <= 'Z')
            c2 = c2 + 32;

        if (c1 != c2) {
            printf("%d", c1 - c2);
            return 0;
        }

        i++;
    }

   
    printf("%d", str1[i] - str2[i]);

    return 0;
}