#include <iostream>
#include <cmath>
using namespace std;

class Coordinate {

private:
	double location;

public:
	Coordinate() : location(0) {

		;
	}

	void setLocation(double loc) {

		location = loc;
	}

	double getLocation() {

		return location;
	}

	double getDistanceFrom(double loc) {

		return abs(location - loc);
	}

	double getDistanceFrom(Coordinate c) {

		return abs(location - c.getLocation());
	}
};

int main() {

	Coordinate c1, c2;

	c1.setLocation(550);
	c2.setLocation(220);

	cout << "Location is set to: " << c1.getLocation() << endl;
	cout << "Distance from 220 : " << c1.getDistanceFrom(c2) << endl;

	return 0;
}
