#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
	long x;
	long y;
public:
	Point() : x(0), y(0) {
		;
	}

	Point(long a, long b) : x(a), y(b) {
		;
	}

	void set_coordinates(long a, long b) {

		x = a;
		y = b;
	}

	double get_x() {

		return x;
	}

	double get_y() {

		return y;
	}

	double get_distance() {

		return sqrt(x*x + y*y);
	}
};

int main() {

	Point p1(5, 9);

	cout	<< "Point:\n"
		<< "\nX-Coordinate: " << p1.get_x()
		<< "\nY-Coordinate: " << p1.get_y()
		<< "\n\nDistance from (0, 0): " << p1.get_distance() << endl;

	return 0;
}
