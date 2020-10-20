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

void spiralOrder(vector<vector<int>> &mat){
	int n = mat.size();
	int m = mat[0].size();
	int left = 0, right = m-1, top = 0, bottom = n-1;

	while(left <= right && top <= bottom){
		for(int i=left;i<=right;i++)
			cout << mat[top][i] << " ";

		top++;

		for(int i=top;i<=bottom;i++)
			cout << mat[i][right] << " ";
		right--;

		if(top <= bottom){

		for(int i=right;i>=left;i--)
			cout << mat[bottom][i] << " ";
		bottom--;
	}

		if(left <= right){

		for(int i=bottom;i>=top;i--)
			cout << mat[i][left] << " ";

		left++;
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
	cout << "The Spiral Order is: "<< endl;
	spiralOrder(mat);
	return 0;
}
