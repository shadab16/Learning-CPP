#include <iostream>
using namespace std;

class A {
protected:
	int _x;
	int _y;
};

class B : A {
public:
	void setX(int x) {
		_x = x;
	}

	void showX() {
		cout << _x << endl;
	}
};

int main() {

	B rahul;

	rahul.setX(65);
	rahul.showX();

	return 0;
}
