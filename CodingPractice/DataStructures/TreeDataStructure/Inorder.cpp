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

void inOrderIterative(TreeNode *root)
{
    TreeNode *curr = root;
    stack<TreeNode*> st;

    while(curr != NULL || !st.empty())
    {
        while(curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->data<<" ";
        curr = curr->right;
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

    cout << "Inorder Recusive: "; inOrderRecusive(root); cout << endl;
    cout << "Inorder Iterative: "; inOrderIterative(root); cout << endl;

    return 0;
}

// Code By Jasmeet Singh

