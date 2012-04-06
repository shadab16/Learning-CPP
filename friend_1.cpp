#include <iostream>
using namespace std;

class Point {
protected:
	int _x;
	int _y;
public:
	Point() : _x(0), _y(0) {
		;
	}

	Point(int x, int y) {
		_x = x;
		_y = y;
	}

	void showLocation() {
		cout << "x: " << _x << "\ny: " << _y << endl;
	}

	friend Point operator+(const Point&, const Point&);
};

Point operator+(const Point& lhs, const Point& rhs) {

	Point temp;

	temp._x = lhs._x + rhs._x;
	temp._y = lhs._y + rhs._y;

	return temp;
}

int main() {

	Point p1(16, 8);
	Point p2(25, 1);

	Point p3 = p1 + p2;

	p3.showLocation();

	return 0;
}
