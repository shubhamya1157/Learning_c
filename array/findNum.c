/*
solve in c-Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.

Examples: 

Input: arr[] = [3, 1, 3]
Output: [3, 2]
Explanation: 3 is occurs twice and 2 is missing.

Input: arr[] = [4, 3, 6, 2, 1, 1]
Output: [1, 5] 
Explanation: 1 is occurs twice and 5 is missing.
*/

#include<stdio.h>
void findNumber(int arr[],int n){
    int sumOfNumber = n*(n+1)/2;
    int sumOfSqureOfNumber = n*(n+1)*(2*n+1)/6;

    int sumOfEleOfArr = 0;
    int sumOfSqureOfArr = 0;

    for(int i = 0; i < n; i++){
        sumOfEleOfArr += arr[i];
        sumOfSqureOfArr += arr[i]*arr[i];
    }

    int diffrenceBtWMissAndDub = sumOfNumber - sumOfEleOfArr;
    int diffrenceBtWSqrOfMissAndDub = sumOfSqureOfNumber - sumOfSqureOfArr;

    int sumOfMissandDup = diffrenceBtWSqrOfMissAndDub/diffrenceBtWMissAndDub;
      
    int miss = (diffrenceBtWMissAndDub + sumOfMissandDup )/2;

    int dup = sumOfMissandDup - miss;

    printf("Missing number is %d and Duplicate number is %d",miss,dup);

}

int main (){
    int arr[] ={4, 3, 6, 2, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    findNumber(arr,n);
}
