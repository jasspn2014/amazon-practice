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

int dp[100][100];
int maxLengthPathWithPlus1Util(vector<vector<int>> &mat, int i, int j, int n){
	if(i < 0 || j < 0 || i >= n || j >= n){
		return 0;
	}
	if(dp[i][j] != -1){
		cout << "Yay DP! " << i << " " << j <<  endl;
		return dp[i][j];
	}

	int left = INT_MIN, right = INT_MIN, top = INT_MIN, bottom = INT_MIN;
	if(i > 0 && ((mat[i][j] + 1) == mat[i-1][j]))
		top = 1 + maxLengthPathWithPlus1Util(mat,i-1,j,n);
	if(j > 0 && ((mat[i][j] + 1) == mat[i][j-1]))
		left = 1 + maxLengthPathWithPlus1Util(mat,i,j-1,n);
	if(j < n-1 && ((mat[i][j] +1) == mat[i][j+1]))
		right = 1 + maxLengthPathWithPlus1Util(mat,i,j+1,n);
	if(i < n-1 && ((mat[i][j] + 1) == mat[i+1][j]))
		bottom = 1 + maxLengthPathWithPlus1Util(mat,i+1,j,n);

	return dp[i][j] = max(left,max(right,max(top,max(bottom,1))));
}
int maxLengthPathWithPlus1(vector<vector<int>> &mat, int n){
		memset(dp,-1,sizeof(dp));
		int res = 1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(dp[i][j] == -1){
					maxLengthPathWithPlus1Util(mat,i,j,n);
				}
			//	cout << res << endl;
				res = max(res,dp[i][j]);
			}
		}
		return res;
}
int main(){
	vector<vector<int>> mat =  {{1, 2, 9},
								              {5, 3, 8},
								              {4, 6, 7}};

	cout <<  maxLengthPathWithPlus1(mat,3);

	return 0;
}
