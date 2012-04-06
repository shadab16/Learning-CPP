#include <iostream>
using namespace std;

struct Student {

	int roll_no;
	string name;
	string city;
};

int main() {

	Student s1;

	cout << "Enter your Roll Number: ";
	cin >> s1.roll_no;

	cout << "Enter your First Name: ";
	cin >> s1.name;

	cout << "Where do you live?: ";
	cin >> s1.city;

	cout	<< "\nData in the Structure instance:\n"
		<< "\nRoll:\t" << s1.roll_no
		<< "\nName:\t" << s1.name
		<< "\nCity:\t" << s1.city << endl;

	return 0;
}
