#include<stdio.h>
#include<stdlib.h>

struct Node{
    int val;
    struct Node *next;
};

void push(int val,struct Node *temp){
    while(temp->next != NULL)
        temp = temp->next;
    
    struct Node *ptr = malloc(sizeof(struct Node));
    ptr->val = val;
    ptr->next = NULL;

    temp->next = ptr;
}

int peek(struct Node *temp){
    while(temp->next != NULL)
        temp = temp->next;

    return temp->val;
}

int pop(struct Node *temp){
    struct Node *prev = NULL;

    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;

    return temp->val;
}

void display(struct Node *head){
    struct Node *curr = head;

    while(curr != NULL){
        printf("%d -> ", curr->val);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main(){

    struct Node *head = NULL;
    struct Node *temp = NULL;
    int size = 0;

    printf("Enter number of elements: ");
    scanf("%d",&size);

    for(int i=0;i<size;i++){

        struct Node *ptr = malloc(sizeof(struct Node));

        printf("Enter %d Node value: ",i+1);
        scanf("%d",&ptr->val);

        ptr->next = NULL;

        if(head == NULL){
            head = temp = ptr;
        }
        else{
            temp->next = ptr;
            temp = ptr;
        }
    }

    display(head);
    printf("%d\n",pop(head));
    display(head);
    push(1,head);
    display(head);
    printf("%d\n",peek(head));


    return 0;
}