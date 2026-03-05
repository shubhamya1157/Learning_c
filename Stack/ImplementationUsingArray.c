#include<stdio.h>

int top = -1;
int size = 0;

void push(int val, int *ptr){
    if(top < size - 1){
        *(ptr + (++top)) = val;
    }
    else
        printf("Stack is full\n");
}

int pop(int *ptr){
    if(top > -1){
        return *(ptr + top--);
    }
    else{
        printf("Stack is empty\n");
        return -1;
    }
}

int peek(int *ptr){
    if(top > -1)
        return *(ptr + top);
    else{
        printf("Stack empty\n");
        return -1;
    }
}

void display(int *ptr){
    int i = top;

    while(i >= 0){
        printf("%d ", *(ptr + i));
        i--;
    }
}

int main(){
    printf("Enter size of your stack: ");
    scanf("%d",&size);

    if(size <= 0){
        printf("Invalid size\n");
        return 0;
    }

    int stack[size];

    push(3,stack);
    push(5,stack);
    push(7,stack);
    push(9,stack);

    display(stack);

    printf("\n%d\n",pop(stack));
    printf("%d\n",pop(stack));

    display(stack);

    printf("\n%d\n",peek(stack));

    display(stack);

    return 0;
}