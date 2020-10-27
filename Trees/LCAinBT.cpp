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

int findLCA(Node *root, int a, int b){
	if(root == NULL){
		return -1;
	}

	vector<int> pathA, pathB;

	if(!findPath(root,pathA,a) || !findPath(root,pathB,b)){
		return -1;
	}

	int i;
	for(i=0;i<pathA.size() && i < pathB.size() ; i++){
		if(pathA[i] != pathB[i])
			break;
	}
	return pathA[i-1];
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

	int a,b;
	a = 4;
	b = 7;
	cout << findLCA(root,a,b);



	return 0;
}
