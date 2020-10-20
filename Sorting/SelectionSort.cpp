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

void printArr(vector<int> &v){
	int n = v.size();
	for(int i=0;i<n;i++)
		cout << v[i] << " ";

	cout << endl;
}

void selectionSort(vector<int> &arr){
	int n = arr.size();
	for(int i=0;i<n-1;i++){
		int mxIdx = i;
		for(int j=i+1;j<n;j++){
			if(arr[mxIdx] > arr[j])
				mxIdx = j;
		}
		swap(arr[mxIdx],arr[i]);
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);

	for(int i=0;i<n;i++)
		cin >> arr[i];

	selectionSort(arr);
	printArr(arr);

	return 0;
}
