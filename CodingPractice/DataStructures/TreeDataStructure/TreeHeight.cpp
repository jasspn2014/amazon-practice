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

int height(TreeNode *root)
{
    if(root == NULL)
        return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    if(lh > rh)
        return lh+1;
    else
        return rh+1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

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

    cout<<height(root);
    return 0;
}

// Code By Jasmeet Singh

