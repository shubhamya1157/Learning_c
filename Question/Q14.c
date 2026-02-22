// Without using any string.h library functions Write a program to find the first occurrence of a given character in a string.
// Input: str = ‘Hello’, ch=’o’, output = 5
// Input = ‘Hello’, ch =’l’ output = 3
// Input str = Hello’, ch = ‘N’ Output = ‘Not present’
// Input str = ‘’, ch = ‘N’ Output = ‘Not present'

#include<stdio.h>

int main(){

    char str[1000];
    char ch;
    int i = 0;
    int found = 0;

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter your character: ");
    scanf(" %c", &ch);   

    while(str[i] != '\0'){
        if(str[i] == ch){
            found = 1;
            break;
        }
        i++;
    }

    if(found){
        printf("First occurrence of %c is at position: %d", ch, i+1);
    } else {
        printf("Not present");
    }

    return 0;
}