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

void rearrange(vector<int> &arr){
	int n = arr.size();

	int left = 0, right = n-1;

	while(left <= right){
		if(arr[left] < 0 && arr[right] < 0){
			left++;
		}
		else if(arr[left] > 0 && arr[right] < 0){
			swap(arr[left],arr[right]);
			left++;
			right--;
		}
		else if(arr[left] > 0 && arr[right] > 0){
			right--;
		}
		else{
			left++;
			right--;
		}
	}
}

int main(){
	vector<int> arr = {-12,11,-13,-5,6,-7,5,-3,-6};
	printArr(arr);
	rearrange(arr);
	printArr(arr);
	return 0;
}
