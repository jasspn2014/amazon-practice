#include<bits/stdc++.h>
using namespace std;

class Complex{
public:
	int real,img;
	Complex(){
		real = 0;
		img = 0;
	}

	Complex(int real, int img){
		this->real = real;
		this->img = img;
	}

	// Complex operator - (Complex obj){
	// 	Complex res;
	// 	res.real = real - obj.real;
	// 	res.img = img - obj.img;
	// 	return res;
	// }

	void operator ++(){
		++real;
		++img;
	}

	void operator ++(int){
		real++;
		img++;
	}


	void print(){
		cout << real << " + " << img << "i" << endl;
	}


};

int main(){
	Complex c1(10,20);
	Complex c2(100,200);
	c1.print();
	c2.print();

	cout << endl;
	++c1;
	c2++;
	c1.print();
	c2.print();
}
