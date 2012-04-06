#include <iostream>
using namespace std;

int main() {

	int factor = 0, i = 0;

	cout << "Enter the factor: ";
	cin >> factor;

	if (factor == 0) {

		cerr << "\nNo point in printing the table!" << endl;
		return -1;
	}

	while (++i <= 10) {
		cout << "\n " << i << " x " << factor << " = " << (i * factor);
	}

	cout << endl;

	return 0;
}
