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

	A o1;
	o1.foo();

	B o2;
	o2.foo();

	return 0;
}
