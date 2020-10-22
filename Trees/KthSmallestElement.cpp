#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
using namespace std;

struct Node{
	struct Node *left;
	int data;
	struct Node *right;
	int lCount;
	Node(int d){
		left = NULL;
		data = d;
		lCount = 0;
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

Node *createBST(Node *root, int data){
	if(root == NULL)
		return new Node(data);
	else{

		if(root->data > data){
			root->left = createBST(root->left,data);
			root->lCount++;
		}
		else{
			root->right = createBST(root->right,data);
		}
	}
	return root;
}

int KthSmallest(Node *root, int k){
	if(root == NULL)
		return -1;
	int count = root->lCount+1;
	if(count == k){
		return root->data;
	}
	if(count > k){
		return KthSmallest(root->left,k);
	}

	return KthSmallest(root->right,k-count);
}
int main(){
	Node *root = NULL;
	int arr[] = {20,8,22,4,12,10,14};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
		root = createBST(root,arr[i]);

	int k = 4;
	cout << KthSmallest(root,k);



	return 0;
}
