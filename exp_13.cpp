#include <iostream>
using namespace std;

int main() {

	int limit = 0;
	int n1 = 0, n2 = 1;

	cout << "No. of terms from Fibonacci series: ";
	cin >> limit;

	if (limit < 0) {

		cerr << "\nERROR: Invalid number of terms." << endl;
		return -1;
	}

	cout << endl;

	while (1) {

		if (!limit--) {
			break;
		}

		cout << n1 << " ";

		if (!limit--) {
			break;
		}

		cout << n2 << " ";

		n1 += n2;
		n2 += n1;
	}

	cout << endl;

	return 0;
}
