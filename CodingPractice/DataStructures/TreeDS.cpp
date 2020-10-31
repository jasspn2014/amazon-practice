//
// Created by jassp on 29-06-2020.
//

// TreeDataStructure

#include<iostream>
#include<stack>
#include<algorithm>
#include<queue>
using namespace std;

struct Tree{
    struct Tree *left;
    int data;
    struct Tree *right;
};

typedef struct Tree Tree;

Tree* newNode(int val) {
    Tree *node = (Tree *) malloc(sizeof(Tree));
    node->left = NULL;
    node->data = val;
    node->right = NULL;

    return node;
}
int search(char arr[], int strt, int end, char value)
{
    int i;
    for (i = strt; i <= end; i++) {
        if (arr[i] == value)
            return i;
    }
}
Tree* buildTree(char in[], char pre[], int inStrt, int inEnd)
{
    static int preIndex = 0;

    if (inStrt > inEnd)
        return NULL;

    /* Pick current node from Preorder traversal using preIndex
    and increment preIndex */
	    Tree* tNode = newNode(pre[preIndex++]);

    /* If this node has no children then return */
    if (inStrt == inEnd)
        return tNode;

    /* Else find the index of this node in Inorder traversal */
    int inIndex = search(in, inStrt, inEnd, tNode->data);

    /* Using index in Inorder traversal, construct left and
     right subtress */
    tNode->left = buildTree(in, pre, inStrt, inIndex - 1);
    tNode->right = buildTree(in, pre, inIndex + 1, inEnd);

    return tNode;
}


Tree* insertNode(Tree *root,int val)
{
    Tree *node = newNode(val);
    if(root == NULL)
    {
        root = node;
        return root;
    }
    else
    {
        queue<Tree*> q;
        q.push(root);
        while(!q.empty())
        {
            if(!q.front()->left) {
                q.front()->left = node;
                return root;
            }
            if(!q.front()->right) {
                q.front()->right = node;
                return root;
            }
            else {
                q.push(q.front()->left);
                q.push(q.front()->right);
                q.pop();
            }

        }
    }
}

void preOrder(Tree *root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Inorder Recursion Code
void inOrder(Tree *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

//InOrder Without Recursion
void inOrderWithoutRecursion(Tree *root)
{
    stack<Tree*> st;
    Tree* current = root;

    bool done = false;

    while(!done)
    {
        if(current != NULL)
        {
            st.push(current);
            current = current->left;
        }

        else if(!st.empty())
            {
                current = st.top();
                cout<<current->data<<" ";
                st.pop();
                current = current->right;
            }

        else
            done = 1;
    }


}

void makeMirror(Tree* root) {
    if (root != NULL) {
        makeMirror(root->left);
        makeMirror(root->right);
        Tree *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}


void inorderWithoutRecursionAgain(Tree* root)
{
    stack<Tree*> st;
    Tree *current = root;
    bool done = false;
    while(!done)
    {
        if(current != NULL)
        {
            st.push(current);
            current = current->left;
        }
        else if(!st.empty())
        {
            current = st.top();
            st.pop();
            cout<<current->data<<" ";
            current = current->right;
        }
        else
            done = 1;
    }
}

void postOrder(Tree *root)
{
    if(root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

void levelOrder(Tree *root)
{
    queue<Tree *> q;
    q.push(root);

    while(!q.empty())
    {
        Tree *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left != NULL)
            q.push(temp->left);
        if(temp->right != NULL)
            q.push(temp->right);

    }
}

void preOrderWithoutRecursion(Tree* root)
{
   if(root == NULL)
       return;
   stack<Tree*> st;
   st.push(root);
   while(!st.empty())
   {
       Tree* node = st.top();
       cout<<node->data<<" ";
       st.pop();
       if(node->right)
           st.push(node->right);
       if(node->left)
           st.push(node->left);
   }
}


void deleteNode(Tree *root, int key)
{
    Tree *ptr = root;
    while(ptr->data != key && ptr != NULL)
    {

    }
}

int search(int arr[], int strt, int end, int value)
{
    int i;
    for (i = strt; i <= end; i++) {
        if (arr[i] == value)
            return i;
    }
}
Tree* buildTree2(int inOrder[], int postOrder[], int inStart, int inEnd, int postOrderIndex)
{
     if(inStart>inEnd)
         return NULL;

     Tree* t = newNode(postOrder[postOrderIndex]);

     if(inStart == inEnd)
         return t;

     int inMidIndex = search(inOrder, inStart, inEnd, t->data);

     t->left = buildTree2(inOrder, postOrder, inStart, inMidIndex-1,postOrderIndex-1);
     t->left = buildTree2(inOrder, postOrder, inStart, inMidIndex-1,postOrderIndex-1);
}


int main()
{
    Tree *root = NULL;
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        root = insertNode(root,arr[i]);
    }

    cout<<"PreOrder: ";
    preOrder(root);
    cout<<endl;

    cout<<"PreOrder Without Recursion: ";
    preOrderWithoutRecursion(root);
    cout<<endl;

    cout<<"InOrder: ";
    inOrder(root);
    cout<<endl;

    cout<<"InOrder Without Recursion: ";
    inorderWithoutRecursionAgain(root);
    cout<<endl;

    cout<<"PostOrder: ";
    postOrder(root);
    cout<<endl;

    cout<<"Level Order: ";
    levelOrder(root);
    cout<<endl;


   makeMirror(root);
    cout<<"InOrder After Mirror: ";
    inOrder(root);
    cout<<endl;


//    char in[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
//    char pre[] = { 'A', 'B', 'D', 'E', 'C', 'F' };
//    int len = sizeof(in) / sizeof(in[0]);
//    Tree* root = buildTree(in, pre, 0, len - 1);
//
//    /* Let us test the built tree by printing Insorder traversal */
//    printf("Inorder traversal of the constructed tree is \n");
//    inOrder(root);
}
