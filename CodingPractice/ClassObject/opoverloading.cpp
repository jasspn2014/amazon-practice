
//Unary Operator Overloading
//#include<iostream>
//using namespace std;
//class MyClass
////{
////private:
////    int a,b;
////public:
////    MyClass()
////    {
////        a = 0;
////        b = 0;
////    }
////
////    void setValue(int a, int b)
////    {
////        this->a = a;
////        this->b = b;
////    }
////
////    void operator ++()
////    {
////        a++;
////        b++;
////    }
////
////    int getA()
////    {
////        return a;
////    }
////
////    int getB()
////    {
////        return b;
////    }
////
////
////
////};
////
////int main() {
////    MyClass obj;
////    int x,y;
////    cout<<"Enter 2 Values: ";
////    cin>>x>>y;
////    obj.setValue(x,y);
////
////    cout<<"Before Object Overloading"<<endl;
////    cout<<"A: "<<obj.getA()<<endl;
////    cout<<"B: "<<obj.getB()<<endl;
////
////    ++obj;
////
////    cout<<"After Object Overloading"<<endl;
////    cout<<"A: "<<obj.getA()<<endl;
////    cout<<"B: "<<obj.getB()<<endl;
////
////}
//
//
//
//// Binary Operator Overloading
//
////
//// Created by jassp on 29-05-2020.
////
////#include<iostream>
////using namespace std;
////
////class Complex {
////private:
////    int real, imag;
////public:
////    Complex(int r = 0, int i =0){
////        real = r;
////        imag = i;
////    }
////
////    void print() {
////        cout << real << " + i" << imag << endl;
////    }
////
////    Complex operator + (Complex &obj) {
////        Complex res;
////        res.real = real + obj.real;
////        res.imag = imag + obj.imag;
////        return res;
////    }
////};
////
////
////int main()
////{
////    Complex c1(10), c2(2, 4);
////    Complex c3 = c1 + c2;
////    c3.print();
////    return 0;
////}
//
}