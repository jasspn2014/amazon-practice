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

int partition(vector<int> &arr, int l, int r){
	int pivot = arr[r];
	int i = l-1;
	for(int j=l;j<=r-1;j++){
			if(arr[j] < pivot){
				i++;
				swap(arr[i],arr[j]);
			}
	}
	swap(arr[i+1],arr[r]);
	return (i+1);
}
void quickSort(vector<int> &arr, int l, int r){
	if(l < r){
		int pi = partition(arr,l,r);

		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,r);
}
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);

	for(int i=0;i<n;i++)
		cin >> arr[i];

	quickSort(arr,0,arr.size()-1);
	printArr(arr);

	return 0;
}
