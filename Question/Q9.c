// Without using any string.h library functions Write a program to copy a
// string into another. Example: Input: “First”, 
// Output: String A is “First, and String B is also “First”,
// Input: “”, Output: String A is Empty, So  String B is also Empty, 

#include<stdio.h>
int main(){

    char str[1000];
    int length = 0;

    printf("Enter your first string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n'){
        length++;
    }
    
    char copyStr[length+1];
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n'){
    copyStr[i] = str[i];
    i++;
    }

    copyStr[i] = '\0'; 


    printf("Now your copy string is: %s",copyStr);

    return 0;
}