#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
using namespace std;

void printArr(vector<int> &v){
	int n = v.size();
	for(int i=0;i<n;i++)
		cout << v[i] << " ";

	cout << endl;
}

void printArr(int *arr, int n){
	for(int i=0;i<n;i++)
		cout << arr[i] << " ";

	cout << endl;
}

void printMatrix(vector<vector<int>> &mat){
	int row, col;
	row = mat.size();
	col = mat[0].size();

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

// int largest(int a, int b){
// 	return a > b ? a : b;
// }
//
// float largest(float a, float b){
// 	return a > b ? a : b;
// }
//
// char largest(char a, char b){
// 	return a > b ? a : b;
// }


template <class T>
T largest(T a, T b){
	return a > b ? a : b;
}


int main(){
	int i1 = 10;
	int i2 = 20;
	int i3 = largest(i1,i2);
	cout << i3 << endl;

	float f1 = 10.22;
	float f2 = 20.96;

	float f3 = largest(f1,f2);
	cout << f3 << endl;

	char c1 = 'a';
	char c2 = 'f';

	char c3 = largest(c1,c2);
	cout << c3 << endl;


	stack<int> st;

	return 0;
}
