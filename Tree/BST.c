#include <stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node* left;
    struct Node* right;
};

struct Node* root = NULL;

struct Node* createNode(int val){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->val = val;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

struct Node* insert(struct Node* ptr, int value) {
    if (ptr== NULL) {
        return createNode(value);
    }

    if (value < ptr->val){
        ptr->left = insert(ptr->left, value);
    } else if(value > ptr->val){
        ptr->right = insert(ptr->right, value);
    }

    return ptr;
}

void inorder(struct Node* ptr){
    if(ptr == NULL) return;
    inorder(ptr->left);
    printf("%d\t",ptr -> val);
    inorder(ptr->right);
}

void search(struct Node* ptr,int val){
    if(ptr == NULL){
        printf("NO value is found");
        return;
    }

    if(val == ptr -> val){
        printf("Value is found");
        return;
    }

    else if(val < ptr -> val){
        search(ptr -> left,val);
    }

    else{
        search(ptr -> right,val);
    }

    return;
}

int main(){

root = insert(root, 50);
root = insert(root, 30);
root = insert(root, 70);
root = insert(root, 40);
root = insert(root, 20);
root = insert(root, 10);

// inorder(root);

// search(root,100);



    return 0;
}
