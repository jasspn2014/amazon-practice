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


class Rectangle{
	float length,width;
public:
	Rectangle(){
		length = 0;
		width = 0;
	}

	Rectangle(float length, float width){
		this->length = length;
		this->width = width;
	}

	double getArea(){
		return length * width;
	}

};


class Box : public Rectangle{
		float height;
	public:
		Box(){
			height = 0;
		}

		Box(float length, float width, float height) : Rectangle(length,width){
			this->height = height;
		}

		float getVolume(){
			return getArea() * height;
		}
};

int main(){
	Box b(10,20,30);
	cout << b.getVolume();
	return 0;
}
