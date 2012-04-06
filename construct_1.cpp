#include <iostream>
using namespace std;

class A {
protected:
	int x;
public:
	A() {
		x = 0;
		cout << "No parameters" << endl;
	}

	A(int _x) {
		x = _x;
		cout << "x is: " << _x << endl;
	}

	A(const A& copy) {
		x = copy.x;
		cout << "Object Copied" << endl;
	}
};

int main() {

	A test1;

	A test2 = 6;

	A test3(45);

	A test4 = test2;

	return 0;
}
