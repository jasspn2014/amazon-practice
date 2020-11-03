#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
using namespace std;


void printMatrix(vector<vector<int>> &mat){
	int n = mat.size();
	int m = mat[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

void printArr(vector<int> v){
	int n = v.size();
	for(int i=0;i<n;i++)
		cout << v[i] << " ";

	cout << endl;
}


void read(vector<int> &v, int n){
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
}

int min(int a, int b, int c){
	if(a <= b && a <= c)
		return a;
	else if(b <= a && b <= c)
		return b;
	else
		return c;
}

int dp[101][101];

int minPath(vector<vector<int>> &cost, int i, int j, int n)
{
		if(i >= n || j >= n){
			return INT_MAX;
		}
		if(dp[i][j] != -1){
			cout << "Yay! DP " << i << " " << j << endl;
			return dp[i][j];
		}
		else if(i == n-1 && j == n-1){
			return cost[i][j];
		}

		return dp[i][j] = cost[i][j] + min(minPath(cost,i+1,j,n), minPath(cost,i,j+1,n), minPath(cost,i+1,j+1,n));
}

int minPathDP(vector<vector<int>> &cost, int n){
	for(int i=1;i<n;i++){
		cost[0][i] += cost[0][i-1];
		cost[i][0] += cost[i-1][0];
	}

	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			cost[i][j] += min(cost[i-1][j],cost[i][j-1],cost[i-1][j-1]);
		}
	}

	return cost[n-1][n-1];
}


int main(){
	vector<vector<int>> v = {
		{ 4, 7, 8, 6, 4 },
		{ 6, 7, 3, 9, 2 },
		{ 3, 8, 1, 2, 4 },
		{ 7, 1, 7, 3, 7 },
		{ 2, 9, 8, 9, 3 }
	};
	memset(dp,-1,sizeof(dp));

	cout << minPathDP(v,5);

// cout << endl << endl;
// 		for(int i=0;i<3;i++){
// 			for(int j=0;j<3;j++){
// 				cout << dp[i][j] << " ";
// 			}
// 			cout << endl;
// 		}
	return 0;
}
