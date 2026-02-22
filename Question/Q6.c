//  Without using any string.h library functions Write 
//  a program to convert a string to uppercase. 
//  Example: Input: “Firstyear”, Output: “FIRSTYEAR”, 
//  Input: “First$year”, Output: “FIRST$YEAR”, Input: “”, 
//  Output: “”, Input: “FIRSTYEAR”, Output: “FIRSTYEAR”,
#include<stdio.h>
int main(){
    char str[100];
    int i = 0;
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    while(str[i] != '\0' && str[i] != '\n'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] + ('A' - 'a');
        }
        i++;
    }
    printf("Now your string is %s",str);
    return 0;
}
