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


class Derived : public Base, public Base1{
public:
	Derived(){
			cout << "Derived class Constructor" << endl;
	}

	~Derived(){
		cout << "Derived class Destructor" << endl;
	}
};

int main(){
	Derived d;
	return 0;
}
