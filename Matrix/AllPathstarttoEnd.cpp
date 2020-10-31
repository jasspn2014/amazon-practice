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

bool isSafe(int i, int j, int row, int col){
	if(i < 0 || i >= row || j < 0 || j >= col){
		return false;
	}else{
		return true;
	}
}

void allPaths(vector<vector<int>> &mat, int i, int j, int row, int col, vector<int> &local, vector<vector<int>> &res){

	if(i == row-1 && j == col-1){
		local.push_back(mat[i][j]);
		res.push_back(local);
		local.pop_back();
		return;
	}

	local.push_back(mat[i][j]);


	if(isSafe(i,j+1,row,col))
		allPaths(mat,i,j+1,row,col,local,res);
	if(isSafe(i+1,j,row,col))
		allPaths(mat,i+1,j,row,col,local,res);

	local.pop_back();
}

int main(){
	vector<vector<int>> mat = {{1,2,2},
														 {3,8,2},
													 	 {5,3,5}};
	int row = 3;
	int col = 3;
	vector<vector<int>> res;
	vector<int> local;
	allPaths(mat,0,0,row,col,local,res);
	printMatrix(res);
	return 0;
}
