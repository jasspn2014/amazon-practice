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

void BFS(Node *root){
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		Node *tmp = q.front();
		q.pop();
		if(tmp->left)
			q.push(tmp->left);

		if(tmp->right)
			q.push(tmp->right);

		cout << tmp->data << " ";
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

	BFS(root);

	return 0;
}
