#include <iostream>
using namespace std;

double multiply(double a, double b) {

	return (a * b);
}

int main() {

	double n1 = 0, n2 = 0;
	double result;

	cout << "Enter two integer values: ";
	cin >> n1 >> n2;

	result = multiply(n1, n2);

	cout << "\nResult :: " << result << endl;

	return 0;
}
