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

void postOrder(Node *root){
	if(root == NULL)
		return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

void postOrderIterative(Node *root){
	stack<Node*> s1;
	stack<Node*> s2;
	s1.push(root);
	while(!s1.empty()){
		Node *tmp = s1.top();
		s1.pop();
		if(tmp->left)
			s1.push(tmp->left);
		if(tmp->right)
			s1.push(tmp->right);

		s2.push(tmp);
	}
	while(!s2.empty()){
		cout << s2.top()->data << " ";
		s2.pop();
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

	cout << "post Order Recursive: ";
	postOrder(root);
	cout << endl;

	cout << "postOrder Iterative: ";
	postOrderIterative(root);
	return 0;
}
