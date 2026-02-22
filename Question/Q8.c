// Without using any string.h library functions Write a program to append 
// first n characters of a string at the end of another.
// Example: Input: “First”,”year”,3 Output: “Firstyea”,
// Input: “First”,”year”,5 Output: “Firstyear”, Input: “First”,”year”,0 
// Output: “First”,  Input: “First”,”year”,-3 Output: “First”.   
#include<stdio.h>
int main(){
    char strOne[1000];
    int lengthOne = 0;

    printf("Enter your first string: ");
    fgets(strOne, sizeof(strOne), stdin);

    while (strOne[lengthOne] != '\0' && strOne[lengthOne] != '\n'){
        lengthOne++;
    }

    char strTwo[1000];
    int lengthTwo = 0;

    printf("Enter your second string: ");
    fgets(strTwo, sizeof(strTwo), stdin);

    while (strTwo[lengthTwo] != '\0' && strTwo[lengthTwo] != '\n'){
    lengthTwo++;
    }

    int n = 0;
    printf("Enter number of character which you want to add:");
    scanf("%d",&n);

    if(n < 0) n = 0;
    if(n > lengthTwo) n = lengthTwo;

    char mergeStr[lengthOne+n+1];

    int i = 0;

    while( i < lengthOne+n){
        if( i < lengthOne){
            mergeStr[i] = strOne[i];
        }
        else{
            mergeStr[i] = strTwo[i-lengthOne];
        }
        i++;
    }
    mergeStr[lengthOne+n] = '\0';
    printf("Now merge string is:%s",mergeStr);
    return 0;
}    


