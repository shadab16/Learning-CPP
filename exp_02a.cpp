#include <iostream>
using namespace std;

int main() {

	long n1, n2, temp;

	cout << "Enter number 1: ";
	cin >> n1;

	cout << "Enter number 2: ";
	cin >> n2;

	cout << "\nBefore swapping: " << n1 << ", " << n2;

	temp = n1;
	n1 = n2;
	n2 = temp;

	cout << "\nAfter swapping: " << n1 << ", " << n2 << endl;

	return 0;
}
