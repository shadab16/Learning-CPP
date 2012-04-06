#include <iostream>
#include <cmath>

using namespace std;

int isPrime(long n) {

	if (n == 2) {
		return 1;
	}

	if (n < 2 || n % 2 == 0) {
		return 0;
	}

	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) {
			return 0;
		}
	}

	return 1;
}

int main() {

	long num(0);

	cout << "Enter an integer to check: ";
	cin >> num;

	if (isPrime(num)) {
		cout << "\nResult :: PRIME" << endl;
	} else {
		cout << "\nResult :: NOT PRIME" << endl;
	}

	return 0;
}
