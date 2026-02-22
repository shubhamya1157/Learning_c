// Without using any string.h library functions Write a program to reverse a string.
// Input: “hello world” ; Output: “dlrow olleh”
// Invalid Input : Input : str = "" (empty string) ; Output : (empty string)

#include<stdio.h>

int main(){

    char str[100];
    int len = 0;

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    
    while(str[len] != '\0'){
        len++;
    }

    if(str[len - 1] == '\n'){
        len--;
    }

    printf("Reverse string is: ");

    for(int j = len - 1; j >= 0; j--){
        printf("%c", str[j]);
    }

    return 0;
}