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

void traverse(Node *root,map<int,vector<int>> &mp, int level){
	if(root == NULL)
		return;

	mp[level].push_back(root->data);

	traverse(root->left,mp,level+1);
	traverse(root->right,mp,level);
}

vector<int> solve(Node* root) {
    vector<int> res;
    if(root == NULL)
        return res;

    map<int,vector<int>> mp;
    traverse(root,mp,0);

		for(auto i : mp){
			for(int j : i.second){
				res.push_back(j);
			}
		}
    return res;
}

int main(){
	Node *root = NULL;
	int arr[] = {};
	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<n;i++)
		root = createTree(root,arr[i]);

	vector<int> res = solve(root);

	for(int i=0;i<res.size();i++)
		cout << res[i] << " ";

	return 0;
}
