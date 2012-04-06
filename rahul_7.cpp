#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "Constructor in class A" << endl;
	}
};

class B : A {
public:
	B() {
		cout << "Constructor in class B" << endl;
	}
};

int main() {

	B rahul;

	return 0;
}
