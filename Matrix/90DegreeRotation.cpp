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

void transpose(vector<vector<int>> &mat){
	int row = mat.size();
	int col = mat[0].size();

	for(int i=0;i<row;i++){
		for(int j=i+1;j<col;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
}
void CounterClockWiseRotateMatrix(vector<vector<int>> &mat){
	transpose(mat);
	int row = mat.size();
	int col = mat[0].size();
	for(int i=0;i<row/2;i++){
		for(int j=0;j<col;j++){
			swap(mat[i][j],mat[row-1-i][j]);
		}
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	vector<vector<int>> mat(n,vector<int>(m));

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> mat[i][j];
		}
	}

	CounterClockWiseRotateMatrix(mat);
	cout << "The Rotated Matrix is: "<< endl;
	printMatrix(mat);
	return 0;
}
