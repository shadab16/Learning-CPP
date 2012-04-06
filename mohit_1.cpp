#include <iostream>

int main() {

	const int limit = 5;
	int arr[limit] = {6, 9, 16, 8, 19};

	std::cout << "Initial Order:\n";

	for (int i = 0; i < limit; ++i) {
		std::cout << arr[i] << "\t";
	}

	for (int i = 0; i < limit - 1; ++i) {
		
		for (int j = 0; j < limit - 1; ++j) {
			if (arr[j] > arr[j+1]) {
				arr[j] ^= arr[j+1] ^= arr[j] ^= arr[j+1];
			}
		}
	}

	std::cout << "\n\nSorted Order:\n";

	for (int i = 0; i < limit; ++i) {
		std::cout << arr[i] << "\t";
	}

	std::cout << std::endl;

	return 0;
}
