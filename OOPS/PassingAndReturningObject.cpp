#include<bits/stdc++.h>
using namespace std;

class Complex{
	int real,img;
public:

	Complex(){
		real = 0;
		img = 0;
	}

	Complex(int real, int img){
		this->real = real;
		this->img = img;
	}

	// void add(Complex c1, Complex c2){
	// 	real = c1.real + c2.real;
	// 	img = c1.img + c2.img;
	// }

	Complex add(Complex c2){
		Complex res;
		res.real = real + c2.real;
		res.img = img + c2.img;
		return res;
	}


	void print(){
		cout << "Real: " << real << endl;
		cout << "Imag: " << img << endl << endl;
	}

};

int main(){
	Complex c1(10,20);
	Complex c2(100,200);

	c1.print();
	c2.print();

	Complex c3 = c1.add(c2);

 	c3.print();
}
