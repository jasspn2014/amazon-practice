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
vector <int> bottomView(Node *root)
{
   vector<int> res;
   int hd = 0;
   queue<pair<Node*, int>> q;
   map<int,int> mp;
   q.push({root,hd});
   while(!q.empty()){
       Node *tmp = q.front().first;
       hd = q.front().second;
       q.pop();
       mp[hd] = tmp->data;
       if(tmp->left){
           q.push({tmp->left,hd-1});
       }

       if(tmp->right){
           q.push({tmp->right,hd+1});
       }
   }

   for(auto i : mp){
       res.push_back(i.second);
   }


   return res;
}
int main(){
	Node *root = NULL;

		root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(25);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

	vector<int> res;
	res = bottomView(root);
	for(int i=0;i<res.size();i++)
		cout << res[i] << " ";
	return 0;
}
