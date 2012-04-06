#include <iostream>
using namespace std;

class A {
public:
	int x;

	A() {
		x = 5;
	}
};

class B : protected A {
public:
	void bar() {
		cout << "Output: " << x << endl;
	}
};

int main() {

	B test;
	test.bar();

	return 0;
}
