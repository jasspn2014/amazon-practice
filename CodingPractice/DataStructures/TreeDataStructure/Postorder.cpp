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

void PostOrderRecusive(TreeNode *root)
{
    if(root == NULL)
        return;

    PostOrderRecusive(root->left);
    PostOrderRecusive(root->right);
    cout << root->data <<" ";
}

void PostOrderIterative(TreeNode *root)
{
    stack<TreeNode*> s1,s2;
    s1.push(root);

    while(!s1.empty())
    {
        TreeNode* t = s1.top();
        s1.pop();
        if(t->left)
            s1.push(t->left);
        if(t->right)
            s1.push(t->right);
        s2.push(t);
    }

    while(!s2.empty()){
        cout << s2.top()->data<<" ";
        s2.pop();
    }
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

    cout << "Postorder Recusive: "; PostOrderRecusive(root); cout << endl;
    cout << "Postorder Iterative: "; PostOrderIterative(root); cout << endl;

    return 0;
}

// Code By Jasmeet Singh

