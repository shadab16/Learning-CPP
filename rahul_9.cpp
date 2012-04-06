#include <iostream>
using namespace std;

class A {
public:
	virtual void foo() {
		cout << "Called in parent class." << endl;
	}
};

class B : public A {
public:
	void foo() {
		cout << "Called in child class." << endl;
	}
};

int main() {

	// Called member function directly on the object
	B obj1;
	obj1.foo();

	// Called member function using a pointer to the base class
	A* obj2 = &obj1;
	obj2->foo();

	return 0;
}
