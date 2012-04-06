#include <iostream>
using namespace std;

long factorial(int n) {

	if (n <= 1) {
		return 1;
	}

	return (long) n * factorial(n - 1);
}

int main() {

	int num = 0;

	cout << "Enter an integer in the range [0, 12]: ";
	cin >> num;

	if (num < 0) {

		cerr << "\nCannot find Factorial of negative numbers!" << endl;
		return -1;
	}

	if (num > 12) {

		cerr << "\nWay too big to calculate!" << endl;
		return -1;
	}

	cout << "\nFactorial :: " << factorial(num) << endl;

	return 0;
}
