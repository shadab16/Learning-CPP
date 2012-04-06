#include <iostream>
using namespace std;

int main() {

	long n1, n2;
	char oper;
	double result;

	cout << "Enter 2 integer values:" << endl;
	cin >> n1 >> n2;

	if (n2 == 0) {
		cerr << "\nThe second operand cannot be Zero." << endl;
		return -1;
	}

	cout << "\n 1. Add (+)"
		"\n 2. Subtract (-)"
		"\n 3. Multiply (*)"
		"\n 4. Divide (/)"
		"\n 5. Modulus (%)"
		"\n\nChoose the operator:" << endl;

	cin >> oper;

	switch(oper) {
		case '+':
			result = n1 + n2;
			break;
		case '-':
			result = n1 - n2;
			break;
		case '*':
			result = n1 * n2;
			break;
		case '/':
			result = (double) n1 / n2;
			break;
		case '%':
			result = n1 % n2;
			break;
		default:
			cerr << "\nInvalid operator selected." << endl;
			return -1;
	}

	cout	<< "\nResult :: "
		<< n1 << " " << oper << " " << n2
		<< " = " << result << endl;

	return 0;
}
