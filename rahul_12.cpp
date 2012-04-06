#include <iostream>

int main() {

	int billy[] = {16, 2, 77, 40, 12071};
	int n, result = 0;

	for (n = 0; n < 5; ++n) {
		result += billy[n];
	}

	std::cout << result << std::endl;

	return 0;
}

