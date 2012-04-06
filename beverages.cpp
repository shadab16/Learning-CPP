#include <iostream>
using namespace std;

int main() {

	int choice = 0;

	cout	<< "Select from the beverage list below:\n\n"
		<< "1. Coca Cola\tRs. 10\n"
		<< "2. Pepsi\tRs. 10\n"
		<< "3. Sprite\tRs. 08\n"
		<< "4. Fanta\tRs. 08\n"
		<< "5. Slice\tRs. 07\n" << endl;

	cin >> choice;

	switch(choice) {
		case 1:
			cout << "Selected beverage: Coca Cola." << endl;
			break;
		case 2:
			cout << "Selected beverage: Pepsi." << endl;
			break;
		case 3:
			cout << "Selected beverage: Sprite." << endl;
			break;
		case 4:
			cout << "Selected beverage: Fanta." << endl;
			break;
		case 5:
			cout << "Selected beverage: Slice." << endl;
			break;
		default:
			cout << "Invalid choice!" << endl;
			break;
	}
	
	return 0;
}
