/*
Given a string s, the task is to replace all the spaces in the string with '%20'.

Examples: 

Input: s = "i love programming"
Output: "i%20love%20programming"
Explanation: The 2 spaces are replaced by '%20'

Input: s = "ab cd"
Output: "ab%20cd"

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char result[300];  // bigger array for %20 replacements
    int i = 0, j = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline if present
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            result[j++] = '%';
            result[j++] = '2';
            result[j++] = '0';
        } else {
            result[j++] = str[i];
        }
        i++;
    }

    result[j] = '\0';

    printf("Output: %s\n", result);

    return 0;
}
