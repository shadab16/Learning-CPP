#include <iostream>
using namespace std;

int main() {

	cout << "Patterm 1: \n\n";

	for (int i = 1; i < 5; ++i) {
		for (int j = 1; j <= i; ++j) {
			cout << " *";
		}
		cout << "\n";
	}

	cout << "\nPatterm 2: \n\n";

	for (int i = 3; i >= 1; --i) {
		for (int j = 1; j <= i; ++j) {
			cout << " *";
		}
		cout << "\n";
	}

	cout << "\nPatterm 3: \n\n";

	for (int i = 1; i <= 5; i += 2) {

		for (int j = i; j < 5; j += 2) {
			cout << "  ";
		}

		for (int j = 1; j <= i; ++j) {
			cout << " *";
		}

		cout << "\n";
	}

	cout << endl;

	return 0;
}
