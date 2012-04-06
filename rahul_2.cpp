#include <iostream>
using namespace std;

class A {
protected:
	int _x;
};

class B {
protected:
	int _y;
};

class C : A, B {
public:
	void setNumbers(int x, int y) {
		_x = x;
		_y = y;
	}

	void showNumbers() {
		cout << _x << endl << _y << endl;
	}
};

int main() {

	C rahul;
	rahul.setNumbers(56, 76);
	rahul.showNumbers();

	return 0;
}
