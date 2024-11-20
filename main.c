#include <stdio.h>
#include <stdlib.h>


//implementation of binary tree DS

//node structure is self referencing(it has pointers to another node)
//forward declaration

struct node;
typedef struct node Node;

struct node {
    int value;
    Node* left;
    Node* right;
};

Node* tree_insert(Node* root, int value);
void reference_tree_insert(Node** pRoot, int value);

void print_tree(Node* root);


int main() {

    //5361490278
    Node* root = NULL;

    root = tree_insert(root,5);
    root = tree_insert(root,3);
    root = tree_insert(root,6);
    root = tree_insert(root,1);
    root = tree_insert(root,4);
    root = tree_insert(root,9);
    root = tree_insert(root,0);
    root = tree_insert(root,2);
    root = tree_insert(root,7);
    root = tree_insert(root,8);

    printf("Hello, World!\n");

    printf("%d", root->right->right->left->right->value);

    return 0;
}

Node* tree_insert(Node* root, int value) {
    // using recursion
    //

    if (root == NULL) {
        root = (Node*)malloc(sizeof(Node));
        if (root == NULL) {
            printf("Failed to allocate space for %d\n",value);
            return NULL;
        }
        root->value = value;
        root->left = NULL;
        root->right = NULL;
    } else {
        if (value < root->value) {
            root->left = tree_insert(root->left, value);
        }
        else if (value > root->value){
            root->right = tree_insert(root->right, value);
        }
    }

    return root;
}

void reference_tree_insert(Node** pRoot, int value){

}