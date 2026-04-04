//Count Occurrences in a Linked List

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int val;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* tail= NULL;

void createLinkedList(int val){
    
   

    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    if(ptr == NULL){
        printf("Memoey allocation faild");
        return;
    }

    ptr -> val = val;
    ptr -> next = NULL;

    if(head == NULL ){
        head = tail = ptr;
    }

    else{
        tail -> next = ptr;
        tail = ptr;
    }
}

void occurrencesCount(int key){
    if(head == NULL){
        printf("Your linkedlist is empty:");
        return;
    }

    struct Node* temp = head;
    int count = 0;

    while(temp != NULL){
        if(temp -> val == key) count++;
        temp = temp -> next;
    }

    printf("Number of occerance of %d is %d",key , count);

    return;
}

int main(){

    createLinkedList(1);
    createLinkedList(2);
    createLinkedList(3);
    createLinkedList(1);
    createLinkedList(1);
    createLinkedList(2);
    createLinkedList(5);

    occurrencesCount(7);




    return 0;
}
