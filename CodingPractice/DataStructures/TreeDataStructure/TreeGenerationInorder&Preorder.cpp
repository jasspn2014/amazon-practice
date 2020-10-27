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

void inOrderRecusive(TreeNode *root)
{
    if(root == NULL)
        return;

    inOrderRecusive(root->left);
    cout << root->data <<" ";
    inOrderRecusive(root->right);
}

TreeNode* generateTree(int *in, int *pre, int )
{
    static int preIndex = 0;
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

    int in[] = {4,8,10,12,14,20,22,25};
    int pre[] = {20,8,4,12,10,14,22,25};
    int n = sizeof(in)/sizeof(in[0]);
    root = generateTree(in,pre,n);

    inOrderRecusive(root);
    return 0;
}

// Code By Jasmeet Singh

