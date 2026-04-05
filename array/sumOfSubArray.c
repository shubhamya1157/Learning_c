/*
Given an integer array arr[], compute the sum of all possible sub-arrays of the array. A sub-array is a contiguous part of the array.

Examples: 

Input: arr[] = [1, 4, 5, 3, 2]
Output: 116
Explanation: Sum of all possible subarrays of the array [1, 4, 5, 3, 2] is 116.

Input: arr[] = [1, 2, 3, 4]
Output: 50
Explanation: Sum of all possible subarrays of the array [1, 2, 3, 4] is 50.


*/

#include<stdio.h>
int main(){
    int arr[] = {1, 4, 5, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for(int i = 0; i < n ; i++){
        for(int j = i; j < n ; j++){
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }
        }
    }

    printf("Sum is: %d",sum);
    return 0;
}
