#include<stdio.h>
int main(){
    int arr[5];
    int* ptr = arr;
    int sum = 0;
    printf("Enter the five element of array:")
    for(int i = 0; i < 5 ; i++){
        scanf("%d",&arr[i]);
        sum = sum + *(ptr+i);
    } 
    printf("Sum of array is:%d",sum);
    return 0;
}