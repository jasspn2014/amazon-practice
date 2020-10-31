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



int minSubsetDiff(int arr[], int n, int sum){
	bool dp[n+1][sum+1];

	for(int i=0;i<=n;i++){
		dp[i][0] = true;
	}

	for(int i=1;i<=sum;i++){
		dp[0][i] = false;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1] <= j){
				dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
			}else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	int diff;
	for(int i=sum/2;i>=0;i--){
		if(dp[n][i] == true){
			diff = sum-2*i;
			break;
		}
	}

	return diff;

}

int main(){
	int arr[] = {1, 6, 11, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += arr[i];
	}
	//cout << sum;
	cout << minSubsetDiff(arr,n,sum);
	return 0;
}
