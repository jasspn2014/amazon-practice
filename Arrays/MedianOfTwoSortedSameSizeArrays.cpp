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

int calculateMedian(int arr[], int n){
	int median;
	if(n%2 == 0){
		median = (arr[n/2-1] + arr[n/2])/2;
	}else{
		median = arr[n/2];
	}
	return median;
}

int getMedian(int arr1[], int arr2[], int n){
	if(n <= 0){
		return -1;
	}
	if(n == 1){
		return (arr1[0] + arr2[0])/2;
	}
	if(n == 2){
		return (max(arr1[0],arr2[0])+min(arr1[1],arr2[1]))/2;
	}

	int m1 = calculateMedian(arr1,n);
	int m2 = calculateMedian(arr2,n);
	// printArr(arr1,n);
	// printArr(arr2,n);
	// cout << m1 << " " << m2 << endl;
	if(m1 == m2){
		return m1;
	}

	if(m1 < m2){
		if(n%2 == 0){
			return getMedian(arr1+n/2-1,arr2,n-n/2+1);
		}
		else{
			return getMedian(arr1+n/2,arr2,n-n/2);
		}
	}

	if(m2 < m1){
		if(n%2 == 0){
			return getMedian(arr2+n/2-1,arr1,n-n/2+1);
		}
		else{
				return getMedian(arr2+n/2,arr1,n-n/2);
		}
	}

}

int main(){
	int arr1[] = {1, 12, 15, 26, 38};
	int arr2[] = {2, 13, 17, 30, 45};

	int n1 = sizeof(arr1)/sizeof(arr1[0]);
 	int n2 = sizeof(arr2)/sizeof(arr2[0]);
 	if (n1 == n2)
			 cout << "Median of Two Arrays is : " << getMedian(arr1,arr2,n1);
	else
			 cout << "Array Size Not Same";
	return 0;
}
