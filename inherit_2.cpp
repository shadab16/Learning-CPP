#include <iostream>
using namespace std;

class A {
public:
	void foo() {
		cout << "Foo" << endl;
	}
};

class B : public A {
public:
	void foo() {
		cout << "Foo Override" << endl;
	}
};

int main() {

	A* o1 = new B;
	o1->foo();

	delete o1;

	return 0;
}
