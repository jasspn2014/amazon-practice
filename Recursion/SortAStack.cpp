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

void insert(stack<int> &st, int val){
	if(st.empty() || st.top() <= val){
		st.push(val);
		return;
	}
	int tmp = st.top();
	st.pop();
	insert(st,val);
	st.push(tmp);
}

void sortStack(stack<int> &st){
	if(st.size() == 1){
		return;
	}
	int tmp = st.top();
	st.pop();
	sortStack(st);
	insert(st,tmp);
}

int main(){
	stack<int> st;
	st.push(15);
	st.push(52);
	st.push(1);
	st.push(81);
	st.push(2);
	st.push(7);

	sortStack(st);

	while(!st.empty()){
		cout << st.top() << endl;
		st.pop();
	}
	return 0;
}
