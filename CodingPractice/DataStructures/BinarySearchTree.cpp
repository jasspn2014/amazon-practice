//
// Created by jassp on 17-06-2020.
//

#include<bits/stdc++.h>
using namespace std;

typedef struct BST{
    struct BST *left;
    int data;
    struct BST *right;
} Node;


Node* insertNode(Node*, int data);
void preOrder(Node*);
void inOrder(Node*);
void postOrder(Node*);

int main()
{
    Node* root = NULL;
    int arr[] = {50,15,62,5,3,8, 20, 37, 58, 91, 60, 24};
}


Node* insert(Node* root, int val)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = val;
    node->left = NULL;
    node->right = NULL;

    if(root == NULL){
        root = node;
        return root;
    }
    else{
        Node* ptr = root;
        if(val<ptr->data && )
            root->left = insert(root->left, val);
        else
            root->right = insert(root->right, val);

    }

}