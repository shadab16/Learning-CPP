#include <iostream>
using namespace std;

int main() {

	long num;

	cout << "Enter a number to check: ";
	cin >> num;

	cout << "\nResult :: ";

	if (num == 0) {
		cout << "Zero";
	} else if (num > 0) {
		cout << "Positive";
	} else {
		cout << "Negative";
	}

	cout << endl;

	return 0;
}
