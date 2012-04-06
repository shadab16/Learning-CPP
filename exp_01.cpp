#include <iostream>
using namespace std;

int main() {

	long a, b, c;
	double x;

	cout << "Enter value of a: ";
	cin >> a;

	cout << "Enter value of b: ";
	cin >> b;

	cout << "Enter value of c: ";
	cin >> c;

	if (c == 0) {
		cerr << "\nERROR: Cannot divide by zero." << endl;
		return -1;
	}

	x = (a + b) / (double) c;
	cout << "\n(a + b) / c = " << x << endl;

	return 0;
}
