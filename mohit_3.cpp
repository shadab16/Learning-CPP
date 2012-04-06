#include <iostream>

int main() {

	char str[11] = "I am Mohit";
	int* ptr = reinterpret_cast<int*>(str);

	std::cout << ptr << std::endl;

	return 0;
}
