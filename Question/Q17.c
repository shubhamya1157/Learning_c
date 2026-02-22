// Without using any string.h library functions Write a program to set all characters of string to a given character. 
// Input : str = "hello world" ch = '*' ; Output :  **********
// Invalid Input : Input : str = "" (empty string) ch = 'a' (character); Output” : (empty string)
// Invalid Input : Input : str = "" (empty string) ch = '' ; Output” : (empty string)

#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i = 0;

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);


    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    
    if (str[0] == '\0') {
        printf("Your string is %s\n", str);
        return 0;
    }

    printf("Enter your character: ");
    scanf(" %c", &ch); 

    i = 0;
    while (str[i] != '\0') {
        str[i] = ch;
        i++;
    }

    printf("Your string is %s\n", str);

    return 0;
}