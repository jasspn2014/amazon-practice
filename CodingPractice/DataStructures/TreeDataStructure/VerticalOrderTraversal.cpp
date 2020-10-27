//#include<bits/stdc++.h>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//struct TreeNode{
//    TreeNode *left;
//    int data;
//    TreeNode *right;
//
//    TreeNode(int d)
//    {
//        left = NULL;
//        data = d;
//        right = NULL;
//    }
//};
//
//void getVerticalOrder(TreeNode* root, int hd,map<int,vector<int>> &mp)
//{
//    if(root == NULL)
//        return;
//
//    mp[hd].push_back(root->data);
//
//    getVerticalOrder(root->left,hd-1,mp);
//    getVerticalOrder(root->right,hd+1,mp);
//}
//
//void verticalOrderTraversal(TreeNode* root)
//{
//    map<int,vector<int>> mp;
//
//    getVerticalOrder(root,0,mp);
//
//    for(auto i : mp)
//    {
//        for(int x : i.second)
//        {
//            cout << x << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//
//    /* Tree Structure
//    *
//    *           20
//    *         /    \
//    *        8      22
//    *       / \       \
//    *      4   12      25
//    *         /  \
//    *        10   14
//    *
//    */
//
//
//    TreeNode *root;
//    root = new TreeNode(20);
//    root->left = new TreeNode(8);
//    root->right = new TreeNode(22);
//    root->left->left = new TreeNode(4);
//    root->left->right = new TreeNode(12);
//    root->left->right->left = new TreeNode(10);
//    root->left->right->right = new TreeNode(14);
//    root->right->right = new TreeNode(25);
//    verticalOrderTraversal(root);
//    return 0;
//}
//
//// Code By Jasmeet Singh
//


#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<climits>
#include<math.h>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

bool findPath(vector<vector<int>> &mat, int n, vector<vector<bool>> &visited,
                pair<int,int> s, pair<int,int> d)
{
    if(s.first < 0 || s.first >= n || s.first < 0 || s.second >= n || (mat[s.first][s.second] == 0) ||
       (visited[s.first][s.second] == true))
        return false;

    if((s.first == d.first) && (s.second == d.second))
        return true;

    visited[s.first][s.second] = true;

    return (findPath(mat,n,visited,{s.first+1,s.second},d) ||
    findPath(mat,n,visited,{s.first,s.second+1},d) ||
    findPath(mat,n,visited,{s.first-1,s.second},d) ||
    findPath(mat,n,visited,{s.first,s.second-1},d));

}
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> mat(n,vector<int>(n));
    pair<int,int> sIndex,dIndex;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                sIndex.first = i;
                sIndex.second = j;
            }
            if(mat[i][j] == 2)
            {
                dIndex.first = i;
                dIndex.second = j;
            }
        }
    }

    vector<vector<bool>> visited(n,vector<bool>(n,false));

    if(findPath(mat,n,visited,sIndex,dIndex))
        cout << 1 << endl;
    else
        cout << 0 <<endl;
    visited.clear();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
	//Code by Jasmeet Singh (jasspn2014)
}