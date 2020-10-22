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

Node* solve(Node* root1, Node* root2) {
    Node *res = NULL;

    if(root1 == NULL && root2 == NULL){
        return res;
    }

    if(root1 == NULL){
        return root2;
    }
    if(root2 == NULL){
        return root1;
    }

    res = new Node(root1->val + root2->val);
    res->left = solve(root1->left,root2->left);
    res->right = solve(root1->right,root2->right);

    return res;
}

int main(){
	Node *root = NULL;
	int arr[] = {};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
		root = createTree(root,arr[i]);




	return 0;
}
