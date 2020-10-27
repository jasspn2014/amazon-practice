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

void preOrderRecusive(TreeNode *root)
{
    if(root == NULL)
        return;

    cout << root->data <<" ";
    preOrderRecusive(root->left);
    preOrderRecusive(root->right);
}

void preOrderIterative(TreeNode *root)
{
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty())
    {
        TreeNode* temp = st.top();
        st.pop();
        cout << temp->data << " ";

        if(temp->right)
            st.push(temp->right);

        if(temp->left)
            st.push(temp->left);
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

    cout << "Preorder Recusive: "; preOrderRecusive(root); cout << endl;
    cout << "Preorder Iterative: "; preOrderIterative(root); cout << endl;
    return 0;
}

// Code By Jasmeet Singh

