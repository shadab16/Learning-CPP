#include <iostream>
using namespace std;

int main() {

	long num;

	cout << "Enter an integer to check: ";
	cin >> num;

	if (num % 2 == 0) {
		cout << "\nResult :: EVEN" << endl;
	} else {
		cout << "\nResult :: ODD" << endl;
	}

	return 0;
}
