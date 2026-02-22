// Without using any string.h library functions Write a
// program to append one string at the end of another. 
// Example: Input: “First”,”year”, Output: “Firstyear”, 
// Input: “First”,””, Output: “First”, Input: “”,”year”,
//  Output: “year”, Input: “”,””, Output: “”,
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
    
    char mergeStr[lengthOne+lengthTwo+1];
 

    for(int i =0;i < lengthOne;i++){
            mergeStr[i] = strOne[i];
         
        } 
    for(int i =lengthOne;i <lengthOne+lengthTwo;i++){
        mergeStr[i] = strTwo[i-lengthOne];
    }

    mergeStr[lengthOne + lengthTwo] = '\0';
    
    printf("Your merge string is:%s",mergeStr);
    return 0;
}