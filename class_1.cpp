#include <iostream>
using namespace std;

class Point {

private:
	double m_x;
	double m_y;

public:
	Point();
	void setLocation(double, double);
	double getX();
	double getY();
};

Point::Point() : m_x(5), m_y(15) {

	;
}

void Point::setLocation(double x, double y) {

	m_x = x;
	m_y = y;
}

double Point::getX() {

	return m_x;
}

double Point::getY() {

	return m_y;
}

int main() {

	Point p1;

	p1.setLocation(156, 5673);

	cout << "getX called on p1 gives: " << p1.getX() << endl;
	cout << "getY called on p1 gives: " << p1.getY() << endl;
	
	return 0;
}
