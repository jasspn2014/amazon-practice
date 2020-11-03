#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define ppii pair<int,pair<int,int>>
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

vector<int> mergeKSortedArrays(vector<vector<int>> mat){
	int n = mat.size();
	priority_queue<ppii,vector<ppii>, greater<ppii>> pq;
	for(int i=0;i<n;i++){
		pq.push({mat[i][0],{i,0}});
	}
	vector<int> res;
	while(!pq.empty()){
		ppii p = pq.top();
		pq.pop();
		res.push_back(p.first);
		if(p.second.second < n-1){
			pq.push({mat[p.second.first][p.second.second+1],{p.second.first,p.second.second+1}});
		}
	}
	return res;
}


int main(){
	vector<vector<int>> mat = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
	printMatrix(mat);
	vector<int> res = mergeKSortedArrays(mat);
	printArr(res);
	return 0;
}
