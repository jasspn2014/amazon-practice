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

void merge(vector<int> &arr, int beg, int mid, int end){
	int n1 = mid-beg+1;
	int n2 = end-mid;

	int L[n1];
	int R[n2];
	int i=0,j=0,k=beg;
	for(i=0;i<n1;i++){
		L[i] = arr[k++];
	}

	for(j = 0;j<n2;j++){
		R[j] = arr[k++];
	}

	k = beg;
	i=0;j=0;
	while(i<n1 && j < n2){
		if(L[i] < R[j]){
			arr[k++] = L[i++];
		}
		else{
			arr[k++] = R[j++];
		}
	}

	while(i < n1){
		arr[k++] = L[i++];
	}

	while(j < n2){
		arr[k++] = R[j++];
	}
}

void mergeSort(vector<int> &v, int beg, int end){
	if(beg < end){
		int mid = beg + (end-beg)/2;

		mergeSort(v,beg,mid);
		mergeSort(v,mid+1,end);
		merge(v,beg,mid,end);
	}
}



int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	read(v,n);
	mergeSort(v,0,n-1);
	printArr(v);
	return 0;
}
