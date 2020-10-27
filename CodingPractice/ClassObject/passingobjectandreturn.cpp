//
// Created by jassp on 29-05-2020.
//
#include<iostream>
class Complex{
private:
    int real,imag;
public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    void setValue(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    int getReal()
    {
        return real;
    }
    int getImag()
    {
        return imag;
    }
    Complex add(Complex c2)
    {
        Complex c3;
        c3.real = real + c2.real;
        c3.imag = imag + c2.imag;
        return c3;
    }

};

int main()
{
    Complex a,b,c;
    int real,imag;
    std::cout<<"Enter Real and Imag Part of A:";
    std::cin>>real>>imag;
    a.setValue(real,imag);

    std::cout<<"Enter Real and Imag Part of B:";
    std::cin>>real>>imag;
    b.setValue(real,imag);

    c = a.add(b);

    std::cout<<a.getReal()<<" + "<<a.getImag()<<"i"<<std::endl;
    std::cout<<b.getReal()<<" + "<<b.getImag()<<"i"<<std::endl;
    std::cout<<"----------------"<<std::endl;
    std::cout<<c.getReal()<<" + "<<c.getImag()<<"i"<<std::endl;

}
