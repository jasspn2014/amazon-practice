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

void printMatrix(int **mat, int row, int col){

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}


class Employee{
	static int count;
	int a;
public:
	Employee(){
		count++;
		a = 5;
	}

	void getCount(){
		cout << count << " "<< a << endl;
	}
};

int Employee :: count = 0;

int main(){
	Employee e1,e2,e3;
	e1.getCount();
	e2.getCount();
	e3.getCount();
	return 0;
}
