#include<bits/stdc++.h>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

struct TreeNode{
    TreeNode *left;
    int data;
    TreeNode *right;

    TreeNode(int d)
    {
        left = NULL;
        data = d;
        right = NULL;
    }
};


void printLeftTopDown(TreeNode *root)
{
    if(root == NULL)
        return;
    if(root->left)
    {
        cout<<root->data << " ";
        printLeftTopDown(root->left);
    }
    else if(root->right)
    {
        cout<<root->data<<" ";
        printLeftTopDown(root->right);
    }
}

void printRightBottomUp(TreeNode *root)
{
    if(root == NULL)
        return;
    if(root->right)
    {
        printRightBottomUp(root->right);
        cout<<root->data << " ";
    }
    else if(root->left)
    {
        printRightBottomUp(root->left);
        cout<<root->data<<" ";
    }
}

void printLeaves(TreeNode *root)
{
    if (root == NULL)
        return;

    printLeaves(root->left);

    // Print it if it is a leaf node
    if (!(root->left) && !(root->right))
        cout << root->data<<" ";

    printLeaves(root->right);
}

void BoundryLevelTraversal(TreeNode *root)
{
    if(root == NULL)
        return;
    cout << root->data<<" ";
    printLeftTopDown(root->left);
    printLeaves(root->left);
    printLeaves(root->right);
    printRightBottomUp(root->right);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    /* Tree Structure
    *
    *           20
    *         /    \
    *        8      22
    *       / \       \
    *      4   12      25
    *         /  \
    *        10   14
    *
    */


    TreeNode *root;
    root = new TreeNode(20);
    root->left = new TreeNode(8);
    root->right = new TreeNode(22);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(12);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(14);
    root->right->right = new TreeNode(25);

    BoundryLevelTraversal(root);
    return 0;
}

// Code By Jasmeet Singh

