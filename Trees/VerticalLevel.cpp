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

void VerticalLevels(Node *root,int level, map<int,vector<int>> &mp){
	if(root == NULL)
		return;
	mp[level].push_back(root->data);

	VerticalLevels(root->left,level-1,mp);
	VerticalLevels(root->right,level+1,mp);
}

void printVerticalOrder(Node* root)
{
    if (!root)
        return;

    map<int, vector<int> > m;
    int hd = 0;

    queue<pair<Node*, int> > que;
    que.push(make_pair(root, hd));

    while (!que.empty()) {

        pair<Node*, int> temp = que.front();
        que.pop();
        hd = temp.second;
        Node* node = temp.first;

        m[hd].push_back(node->data);

        if (node->left != NULL)
            que.push(make_pair(node->left, hd - 1));
        if (node->right != NULL)
            que.push(make_pair(node->right, hd + 1));
    }

    map<int, vector<int> >::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        for (int i = 0; i < it->second.size(); ++i)
            cout << it->second[i] << " ";
        cout << endl;
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
	root->right->left->right = new Node(8);
	root->right->right->right = new Node(9);
	root->right->right->left = new Node(10);
	root->right->right->left->right = new Node(11);
	root->right->right->left->right->right = new Node(12);

		map<int,vector<int>> mp;
		// Recursive
		VerticalLevels(root,0,mp);

		for(auto i : mp){
        for(auto j : i.second){
            cout << j << " ";
        }
				cout << endl;
    }

		cout << endl << endl;
		// Iterative
		printVerticalOrder(root);
	return 0;
}
