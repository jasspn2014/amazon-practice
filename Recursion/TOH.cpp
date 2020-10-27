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


void TOH(int n, char s, char d, char h){
	if(n == 1){
		cout << "Move " << n <<" from "<< s << " to " << d << endl;
		return;
	}

	TOH(n-1,s,h,d);
	cout << "Move " << n <<" from "<< s << " to " << d << endl;
	TOH(n-1,h,d,s);
}

int main(){
	int n;
	cin >> n;
	TOH(n,'A','C','B');
	return 0;
}
