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

void RightView(Node *root){
	queue<Node*> q;
	if(root == NULL){
		return;
	}
	q.push(root);

	while(!q.empty()){
		int n = q.size();
		for(int i=1;i<=n;i++){
			Node *tmp = q.front();
			q.pop();
			if(i == n){
				cout << tmp->data << " ";
			}
				if(tmp->left)
					q.push(tmp->left);
				if(tmp->right)
					q.push(tmp->right);
			}
		}
}

int main(){
	Node *root = NULL;
	// int arr[] = {};
	// int n = sizeof(arr)/sizeof(arr[0]);
	// for(int i=0;i<n;i++)
	// 	root = createTree(root,arr[i]);

	 	root = new Node(12);
    root->left = new Node(10);
    root->right = new Node(30);
    root->right->left = new Node(25);
    root->right->right = new Node(40);

	RightView(root);


	return 0;
}
