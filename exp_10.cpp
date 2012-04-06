#include <iostream>
using namespace std;

int max(int a, int b) {

	return (a > b ? a : b);
}

int main() {

	int n1, n2, n3;
	int result;

	cout << "Enter 3 integer values:\n";
	cin >> n1 >> n2 >> n3;

	result = max(n1, max(n2, n3));
	cout << "\nThe greatest value is: " << result << endl;

	return 0;
}
