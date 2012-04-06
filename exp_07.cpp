#include <iostream>
using namespace std;

void swap(int& a, int& b) {

	a ^= b ^= a ^= b;
}

int main() {

	const int limit = 10;
	int num[limit] = {};
	int flag = 1;

	cout << "Enter " << limit << " integer values:" << endl;

	for (int i = 0; i < limit; ++i) {
		cin >> num[i];
	}

	do {
		flag = 0;

		for (int i = 0; i < limit - 1; ++i) {
			if (num[i] > num[i+1]) {
				flag = 1;
				swap(num[i], num[i+1]);
			}
		}

	} while (flag);

	cout << "\nSorted in Ascending order:\n";

	for (int i = 0; i < limit; ++i) {
		cout << num[i] << " ";
	}

	cout << endl;

	return 0;
}
