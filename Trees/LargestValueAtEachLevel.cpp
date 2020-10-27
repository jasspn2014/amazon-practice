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

void LargestatEachLevel(Node *root){
	if(root == NULL){
		return;
	}
	queue<Node *> q;
	q.push(root);
	while(!q.empty()){
		int n = q.size();
		int mx = INT_MIN;
		for(int i=0;i<n;i++){
			Node* tmp = q.front();
			q.pop();
			mx = max(mx,tmp->data);
			if(tmp->left){
				q.push(tmp->left);
			}
			if(tmp->right){
				q.push(tmp->right);
			}
		}
		cout << mx << " ";
	}
}

int main(){
	Node *root = NULL;
	int arr[] = {};
	int n = sizeof(arr)/sizeof(arr[0]);
	root = new Node(4);
	root->left = new Node(9);
	root->right = new Node(2);
	root->left->left = new Node(3);
	root->left->right = new Node(5);
	root->right->right = new Node(7);

	LargestatEachLevel(root);




	return 0;
}
