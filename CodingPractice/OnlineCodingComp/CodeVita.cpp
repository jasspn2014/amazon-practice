#include<bits/stdc++.h>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;


typedef struct Tree{
    struct Tree *left;
    int data;
    struct Tree *right;
}Tree;

Tree *newNode(int val)
{
    Tree *node = (Tree*)malloc(sizeof(Tree));
    node->left = NULL;
    node->data = val;
    node->right = NULL;
    return node;
}
Tree *constructBinaryTree(Tree* root,int val)
{
    Tree *node = newNode(val);

    if(root == NULL){
        root = node;
        return root;
    }

    queue<Tree*> q;
    q.push(root);
    while(!q.empty())
    {
        Tree *temp = q.front();
        q.pop();
        if(temp->left == NULL)
        {
            temp->left = node;
            return root;
        }
        else if(temp->right == NULL)
        {
            temp->right = node;
            return root;
        }
        else
        {
            q.push(temp->left);
            q.push(temp->right);
        }
    }

}

Tree* constructBinarySearchTree(Tree *root, int val)
{
    if(root == NULL)
    {
        return newNode(val);
    }

    if(root->data > val)
        root->left = constructBinarySearchTree(root->left,val);
    else
        root->right = constructBinarySearchTree(root->right,val);

    return root;
}

void inorder(Tree *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void inorderIterative(Tree *root){
    stack<Tree*> st;
    Tree *curr = root;
    while(curr != NULL || !st.empty())
    {
        while(curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}

Tree *deleteNode(Tree *root, int key)
{
    if(key > root->data)
    {
        root->right = deleteNode(root->right,key);
    }
    else if(key < root->data)
    {
        root->left = deleteNode(root->left,key);
    }
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            return NULL;
        }
    }
    return root;
}
void preorder(Tree *root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void preorderIterative(Tree *root)
{
    if(root == NULL)
        return;
    stack<Tree*> st;
    Tree *curr = root;
    st.push(curr);
    while(!st.empty())
    {
        curr = st.top();
        cout<<curr->data<<" ";
        st.pop();
        if(curr->right)
            st.push(curr->right);
        if(curr->left)
            st.push(curr->left);
    }
}

void postorder(Tree *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}


void postorderIterative(Tree *root)
{
    if(root == NULL)
        return;
    stack<Tree*> st;
    Tree *curr = root;
    st.push(curr);
    while(!st.empty())
    {
        if(curr->right)
            st.push(curr->right);
        if(curr->left)
            st.push(curr->left);

        curr = st.top();
        cout<<curr->data<<" ";
        st.pop();
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    Tree *BTroot = NULL;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        BTroot = constructBinaryTree(BTroot,arr[i]);
    }

//    inorder(BTroot);

//    Tree *BSTroot = NULL;
//    int n = sizeof(arr)/sizeof(arr[0]);
//
//    for(int i=0;i<n;i++)
//        BSTroot = constructBinarySearchTree(BSTroot,arr[i]);

    //inorder(BSTroot);
    //inorderIterative(BTroot);

//    preorder(BTroot);
//    cout<<endl;
//    preorderIterative(BTroot);

    postorder(BTroot);
    cout<<endl;
    postorderIterative(BTroot);

    return 0;
}

// Code By Jasmeet Singh


