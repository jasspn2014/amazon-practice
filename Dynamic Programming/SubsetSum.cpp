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

bool isSubsetAvailable(int arr[], int n, int sum){
	if(sum == 0){
		return true;
	}
	if(n == 0 && sum != 0){
		return false;
	}

	if(arr[n-1] <= sum){
		return isSubsetAvailable(arr,n-1,sum-arr[n-1]) || isSubsetAvailable(arr,n-1,sum);
	}else{
		return isSubsetAvailable(arr,n-1,sum);
	}
}

int subsetDP(int arr[], int n, int sum){
	int dp[n+1][sum+1];

	for(int i=0;i<=n;i++){
		dp[i][0] = 1;
	}

	for(int i=1;i<=sum;i++){
		dp[0][i] = 0;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1] <= j){
				dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
			}else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}

	return dp[n][sum];
}

int main(){
	int arr[] = {2, 1, 8, 9, 5, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 9;
	cout << subsetDP(arr,n,sum);
	return 0;
}
