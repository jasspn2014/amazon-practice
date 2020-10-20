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

void insertionSort(vector<int> &arr){
	int n = arr.size();
	for(int i=1;i<n;i++){
		int tmp = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j] > tmp){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = tmp;
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);

	for(int i=0;i<n;i++)
		cin >> arr[i];

	insertionSort(arr);
	printArr(arr);

	return 0;
}
