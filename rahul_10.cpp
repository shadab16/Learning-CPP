#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak() = 0;
};

class Dog : Animal {
public:
	void speak() {
		cout << "Bow wow!" << endl;
	}
};

int main() {

	Dog rahul;
	rahul.speak();

	return 0;
}
