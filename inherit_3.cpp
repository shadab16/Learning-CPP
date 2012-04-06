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
		cout << "Foo in B" << endl;
	}
};

class C : public A {
public:
	void foo() {
		cout << "Foo in C" << endl;
	}
};

class D : public B, public C {
public:
	void foo() {
		((A*)(B*)this)->foo();
	}
};

int main() {

	D test;
	test.foo();

	return 0;
}
