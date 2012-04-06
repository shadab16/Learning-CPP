#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char str[32] = "";
	int length = 0;

	cout << "Enter a string: ";
	cin.getline(str, 32);

	length = strlen(str);

	for (int i = 0; i < (length / 2); ++i) {

		if (str[i] != str[length - 1 - i]) {

			cout << "\nThe string IS NOT A Palindrome!" << endl;
			return -1;
		}
	}

	cout << "\nThe string IS A Palindrome!" << endl;

	return 0;
}
