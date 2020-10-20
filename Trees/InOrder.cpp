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

void inOrderIterative(Node *root){
	stack<Node*> st;
	Node *curr = root;
	while(curr != NULL || !st.empty()){
		while(curr != NULL){
			st.push(curr);
			curr = curr->left;
		}
		curr = st.top();
		st.pop();
		cout << curr->data << " ";
		curr = curr->right;
	}
}

int main(){
	Node *root = NULL;
	root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	cout << "in Order Recursive: ";
	inOrder(root);
	cout << endl;

	cout << "inOrder Iterative: ";
	inOrderIterative(root);
	return 0;
}
