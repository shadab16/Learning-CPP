#include <iostream>
using namespace std;

int main() {

	int n50P, n1Re, n2Rs, n5Rs;

	cout << "Number of 50p coins: ";
	cin >> n50P;

	cout << "Number of 1Re coins: "; 
	cin >> n1Re;

	cout << "Number of 2Rs coins: ";
	cin >> n2Rs;

	cout << "Number of 5Rs coins: ";
	cin >> n5Rs;

	if (n50P < 0 || n1Re < 0 || n2Rs < 0 || n5Rs < 0) {

		cerr << "\nERROR: Invalid values supplied." << endl;
		return -1;
	}

	cout	<< "\nTotal coins: "
		<< (n50P + n1Re + n2Rs + n5Rs)
	
		<< "\nAmount: Rs. "
		<< (n50P * 0.5) + (n1Re) + (n2Rs * 2) + (n5Rs * 5)
		
		<< endl;

	return 0;
}
