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

void inorder(struct Node* ptr){
    

    if(ptr != NULL){
        inorder(ptr -> left);
        printf("%d\t",ptr -> val);
        inorder(ptr -> right);
    }    

}

void preorder(struct Node* ptr){

    if(ptr != NULL){
        printf("%d\t",ptr -> val);
        preorder(ptr -> left);
        preorder(ptr -> right);
    }
}

void postorder(struct Node* ptr) {
    if (ptr != NULL) {
        postorder(ptr -> left);
        postorder(ptr -> right);
        printf("%d\t", ptr -> val);
    }
}

struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

int main(){
    root = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);
    root -> left -> left = createNode(4);
    root -> left -> right = createNode(5);
    root -> right -> left = createNode(6);
    root -> right -> right = createNode(7);

    // inorder(root);
    // preorder(root);
    // postorder(root);

    return 0;
}
