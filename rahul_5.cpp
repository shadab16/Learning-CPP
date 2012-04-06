#include <iostream>
using namespace std;

class A {
protected:
	int _x;
public:
	A() {
		cout << "Object created. YAY!" << endl;
	}

	A(const A& copy) {
		_x = copy._x;
		cout << "Object constructed with copied value: " << copy._x << endl;
	}

	void setX(int x) {
		cout << "Value set to: " << x << endl;
		_x = x;
	}
};

int main() {

	A foo;
	foo.setX(56);

	A bar = foo;

	return 0;
}
