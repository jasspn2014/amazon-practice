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

void preOrder(Node *root){
	if(root == NULL)
		return;
  cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void preOrderIterative(Node *root){
	stack<Node*> st;
	st.push(root);
	while(!st.empty()){
		Node *curr = st.top();
		st.pop();
		if(curr->right)
			st.push(curr->right);
		if(curr->left)
			st.push(curr->left);

		cout << curr->data << " ";
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

	cout << "Pre Order Recursive: ";
	preOrder(root);
	cout << endl;

	cout << "PreOrder Iterative: ";
	preOrderIterative(root);
	return 0;
}
