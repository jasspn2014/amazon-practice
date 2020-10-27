/*
//
// Created by jassp on 01-06-2020.
//

#include<bits/stdc++.h>
using namespace std;

class Shape{
public:
    int height, width, area;

    void printArea()
    {
        cout<<"Area is: "<<area<<endl;
    }

    void setValue(int h, int w)
    {
        height = h;
        width = w;
    }
};

class Rectangle : public Shape{
public:
    void calcArea()
    {
        area = height * width;
    }


};

class Triangle : public Shape{
public:
    void calcArea()
    {
        area = 0.5 * height * width;
    }
};

int main()
{
    Rectangle r;
    Triangle t;
    r.setValue(10,5);
    t.setValue(10,5);
    r.calcArea();
    t.calcArea();
    r.printArea();
    t.printArea();

}


*/


//#include<bits/stdc++.h>
//using namespace std;
//
//class ClassA
//{
//public:
//    int a;
//};
//
//class ClassB : public ClassA
//{
//public:
//    int b;
//};
//
//class ClassC : public ClassA
//{
//public:
//    int c;
//};
//
//class ClassD : public ClassB, public ClassC
//{
//public:
//    int d;
//};
//
//int main()
//{
//
//    ClassD obj;
//
//    obj.ClassB::a = 10;
//    obj.ClassC::a = 100;
//    obj.b = 20;
//    obj.c = 30;
//    obj.d = 40;
//
//
//    cout<< "\n A due to class B : "<<obj.ClassB::a;
//    cout<< "\n A due to class C : "<<obj.ClassC::a;
//    cout<< "\n B : "<< obj.b;
//    cout<< "\n C : "<< obj.c;
//    cout<< "\n D : "<< obj.d;
//
//}



////2. Using Virtual Keyword During Inheritance
//
//#include<iostream>
//using namespace std;
//
//class ClassA
//{
//public:
//    int a;
//};
//
//class ClassB : virtual public ClassA
//{
//public:
//    int b;
//};
//class ClassC : virtual public ClassA
//{
//public:
//    int c;
//};
//
//class ClassD : public ClassB, public ClassC
//{
//public:
//    int d;
//};
//
//int main()
//{
//
//    ClassD obj;
//
//    obj.a = 10;
//    obj.a = 100;
//
//    obj.b = 20;
//    obj.c = 30;
//    obj.d = 40;
//
//    cout<< "\n A : "<< obj.a;
//    cout<< "\n B : "<< obj.b;
//    cout<< "\n C : "<< obj.c;
//    cout<< "\n D : "<< obj.d;
//
//}


////3. Virtual Function
//
//#include <iostream>
//using namespace std;
//
//class base {
//public:
//    virtual void print()
//    {
//        cout << "print base class" << endl;
//    }
//
//    void show()
//    {
//        cout << "show base class" << endl;
//    }
//};
//
//class derived : public base {
//public:
//    void print()
//    {
//        cout << "print derived class" << endl;
//    }
//
//    void show()
//    {
//        cout << "show derived class" << endl;
//    }
//};
//
//int main()
//{
//    base* bptr;
//    derived d;
//    bptr = &d;
//
//    // virtual function, binded at runtime
//    bptr->print();
//
//    // Non-virtual function, binded at compile time
//    bptr->show();
//}




//4. Constructor Overloading

#include<iostream>
using namespace std;
class Rectangle
{
    float width,length;
public:
    Rectangle(){
        width = 0;
        length = 0;
    }

    Rectangle(float len, float wid)
    {
        length = len;
        width = wid;
    }

    float area()
    {
        return length*width;
    }
};


class Box : public Rectangle
{
    float height;
public:
    Box() : Rectangle()
    {
        height = 0;
    }

    Box(float len, float wid, float ht) : Rectangle(len,wid)
    {
        height = ht;
    }

    float volume()
    {
        return area()*height;
    }
};


int main()
{
    Box bx;
    Box cx(4,8,5);
    cout<<bx.volume()<<endl;
    cout<<cx.volume()<<endl;
}



//////5. Overriding Base Class Function
//#include<iostream>
//using namespace std;
//
//class Mother
//{
//public:
//    void display()
//    {
//        cout<<"Mother Class Display Function"<<endl;
//    }
//};
//
//class Daughter : public Mother{
//public:
//    void display()
//    {
//        cout<<"Daughter Class Display Function"<<endl;
//        Mother::display();
//    }
//};
//
//
//int main()
//{
//    Daughter d;
//    d.display();
//}



////6. Static Function
//#include<iostream>
//using namespace std;
//
//class ID{
//    static int s_id;
//
//public:
//    static int getID()
//    {
//        return s_id;
//    }
//    static int inc()
//    {
//        s_id++;
//    }
//};
//
//int ID :: s_id = 1;
//
//int main()
//{
//    ID::inc();
//    ID::inc();
//    cout<<ID::getID()<<endl;
//    cout<<ID::getID()<<endl;
//}