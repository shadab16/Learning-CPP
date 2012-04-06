#include <iostream>

void swap(int& a, int& b) {

	int x = a;

	a = b;
	b = x;
}

int main() {

	int num1 = 5;
	int num2 = 7;

	std::cout << num1 << "\t" << num2 << std::endl;

	swap(num1, num2);

	std::cout << num1 << "\t" << num2 << std::endl;	

	return 0;
}
