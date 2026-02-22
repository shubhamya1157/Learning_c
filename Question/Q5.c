// Without using any string.h library functions Write a program to convert 
// a string to lowercase. Example: Input: “Firstyear”, Output: “firstyear”,
// Input: “First$year”, Output: “first$year”, Input: “”, Output: “”, 
// Input: “firstyear”, Output: “firstyear”,  
#include<stdio.h>
int main(){
    char str[100];
    int i = 0;
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    while(str[i] != '\0' && str[i] != '\n'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }
    printf("Now your string is %s",str);
    return 0;
}