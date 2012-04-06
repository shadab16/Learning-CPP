#include <iostream>

void swap(int& a, int& b) {

	a = a + b;
	b = a - b;
	a = a - b;
}

int main() {

	int n1 = 5;
	int n2 = 8;

	std::cout << n1 << "\t" << n2 << std::endl;

	swap(n1, n2);

	std::cout << n1 << "\t" << n2 << std::endl;

	return 0;
}
