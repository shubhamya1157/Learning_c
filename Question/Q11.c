// Without using any string.h library functions Write a program to compares
// two strings character by character.
// Input: str1 =  "abcde", str2  =  "abcde"  output : 0;  Input : str1 = “\n”; 
// char, str2 = “\n”; Output : 0, Input : str1 = "Hello", 
// str2 = "Hello, world!"; output : -44;  Input : str1 = "Hello, world!", 
// str2 = "Hello world!"; output : 44.


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

    int max = 0 ,i = 0, output = 0;
    if(lengthOne >= lengthTwo){

         while(strTwo[i] != '\0' && strTwo[i] != '\n'){
            if(strOne[i] - strTwo[i] == 0){
            i++;
            continue;
            }
            else {
                output = strOne[i] - strTwo[i];
                break;
            }
         }
         output = strOne[i] - strTwo[i];

    }
    else{
        while(strOne[i] != '\0' && strOne[i] != '\n'){
            if(strTwo[i] - strOne[i] == 0) {
                i++;
                continue;
            }
            else{
                output = strOne[i] - strTwo[i];
                break;
            }
            
         }
        output = strOne[i] - strTwo[i];
        }

    printf("Your output is %d",output);

return 0;
}
