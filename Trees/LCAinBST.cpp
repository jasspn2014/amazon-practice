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

Node* createBST(Node *root, int val){
	if(root == NULL)
		return new Node(val);
 	if(root->data > val){
		root->left = createBST(root->left,val);
	}else{
		root->right = createBST(root->right,val);
	}
}

int findLCA(Node *root,int a,int b){
	if(root == NULL){
		return -1;
	}

	if(root->data < a && root->data < b){
		return findLCA(root->right,a,b);
	}
	else if(root->data > a && root->data > b){
		return findLCA(root->left,a,b);
	}else{
		return root->data;
	}
}

int main(){
	Node *root = NULL;
	int arr[] = {20,8,22,4,12,10,14};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		root = createBST(root,arr[i]);
	}
	int a = 4;
	int b = 22;
	cout << findLCA(root,a,b) << endl;



	return 0;
}
