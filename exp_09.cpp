#include <iostream>
using namespace std;

int main() {

	int sum = 0;

	for (int i = 2; i < 100; i += 2) {
		sum += i;
	}

	cout << "Sum of even numbers (1, 100) :: " << sum << endl;

	return 0;
}
