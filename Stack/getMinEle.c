#include <stdio.h>
#define MAX 100

int stack[MAX], minStack[MAX];
int top = -1, minTop = -1;

// Push
void push(int x) {
    // Push in main stack
    stack[++top] = x;

    // Push in min stack if needed
    if (minTop == -1 || x <= minStack[minTop]) {
        minStack[++minTop] = x;
    }
}

// Pop
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }

    int popped = stack[top--];

    // If popped element is minimum, remove from min stack
    if (popped == minStack[minTop]) {
        minTop--;
    }

    printf("Deleted: %d\n", popped);
}

// Get Minimum
void getMin() {
    if (minTop == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Minimum: %d\n", minStack[minTop]);
    }
}

int main() {
    push(6);
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);

    getMin();  

    pop();     
    getMin();  

    pop();    
    getMin(); 

    return 0;
}
