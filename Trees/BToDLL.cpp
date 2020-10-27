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


void printList(Node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->right;
	}

	cout << endl;
}


void BToDLL(Node *root, Node* &head){
	if(root == NULL)
		return;
	BToDLL(root->right,head);
	root->right = head;

	if(head != NULL){
		head->left = root;
	}

	head = root;
	BToDLL(root->left,head);
}

int main(){
	Node *root = NULL;
	root = new Node(10);
  root->left = new Node(12);
  root->right = new Node(15);
  root->left->left = new Node(25);
  root->left->right = new Node(30);
  root->right->left = new Node(36);


	cout << "Inorder of Tree: ";
	inOrder(root);
	cout << endl;
	Node* head = NULL;
  BToDLL(root, head);
  printList(head);




	return 0;
}
