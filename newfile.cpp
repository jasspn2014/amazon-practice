// CPP program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class" << endl;
	}

	void show()
	{
		cout << "show base class" << endl;
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class" << endl;
	}

	void show()
	{
		cout << "show derived class" << endl;
	}
};

class derived2 : public base {
public:
	void print()
	{
		cout << "print derived2 class" << endl;
	}

	void show()
	{
		cout << "show derived2 class" << endl;
	}
};


class derived3 : public base {
public:
	void print()
	{
		cout << "print derived3 class" << endl;
	}

	void show()
	{
		cout << "show derived3 class" << endl;
	}
};

void whoAmI(base *obj){
	obj->print();
}

int main()
{
	base* bptr;
	derived2 d;
	bptr = &d;

	whoAmI(bptr);
}
