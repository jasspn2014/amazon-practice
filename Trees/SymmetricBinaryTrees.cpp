#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
using namespace std;

struct Node{
	struct Node *left;
	int data;
	struct Node *right;
	Node(int d){
		left = NULL;
		data = d;
		right = NULL;
	}
};

void inOrder(Node *root){
	if(root == NULL)
		return;
	inOrder(root->left);
  cout << root->data << " ";
	inOrder(root->right);
}

Node* createTree(Node *root, int data){
	if(root == NULL)
		return new Node(data);
	else{
		queue<Node*> q;
		q.push(root);
		while(!q.empty()){
			Node *tmp = q.front();
			q.pop();
			if(tmp->left == NULL){
				tmp->left = new Node(data);
				return root;
			}
			else if(tmp->right == NULL){
					tmp->right = new Node(data);
					return root;
			}
			else{
				q.push(tmp->left);
				q.push(tmp->right);
			}
		}
		return root;
	}
}


bool isMirror(struct Node *root1, struct Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;

    if (root1 && root2 && root1->key == root2->key)
        return isMirror(root1->left, root2->right) &&
               isMirror(root1->right, root2->left);

    return false;
}

bool isSymmetric(struct Node* root)
{
    return isMirror(root, root);
}

int main(){
	Node *root = NULL;
	int arr[] = {};
	int n = sizeof(arr)/sizeof(arr[0]);
		Node *root        = new Node(1);
     root->left        = new Node(2);
     root->right       = new Node(2);
     root->left->left  = new Node(3);
     root->left->right = new Node(4);
     root->right->left  = new Node(4);
     root->right->right = new Node(3);



	return 0;
}
