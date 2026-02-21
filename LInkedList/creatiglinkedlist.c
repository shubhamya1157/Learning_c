//Creating LinkedList-

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int val;
    struct Node* next;
};

int main(){

    struct Node* head = NULL;
    struct Node* temp = NULL;   
    int len;

    printf("Enter length of linkedlist which you want to create: ");
    scanf("%d",&len);

    for(int i = 1; i <= len ; i++){

        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter the value of %d Node: ",i);
        scanf("%d",&ptr->val);
        ptr->next = NULL;

        if(head == NULL){
            head = temp =  ptr;   
        }
        else{
            temp->next = ptr;  
            temp = ptr;        
        }
    }

    return 0;
}