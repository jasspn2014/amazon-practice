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


int main(){

	return 0;
}
