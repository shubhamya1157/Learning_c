/*
Given an array of integers arr[], move all the zeros to the end of the array while maintaining the relative order of all non-zero elements.

Examples: 

Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end.

Input: arr[] = [10, 20, 30]
Output: [10, 20, 30]
Explanation: No change in array as there are no 0s.

Input: arr[] = [0, 0]
Output: [0, 0]
Explanation: No change in array as there are all 0s.

*/

#include<stdio.h>

int main(){
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int j = 0; // position for non-zero

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}
