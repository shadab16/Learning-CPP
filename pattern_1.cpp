#include <iostream>
using namespace std;

int main() {

	for (int i = 5; i > 0; --i) {

		for (int j = 0; j < i; ++j) {
			cout << " " << static_cast<char>('A' + j);
		}

		for (int j = 1; j < 2*(5-i); ++j) {
			cout << "  ";
		}

		for (int j = i; j > 0; --j) {
			if (i == 5 && j == i) {
				continue;
			}
			cout << " " << static_cast<char>('A' + j - 1);
		}

		cout << endl;
	}

	return 0;
}
