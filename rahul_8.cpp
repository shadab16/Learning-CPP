#include <iostream>
using namespace std;

class A {
public:
	void bark() {
		cout << "Bow wow... bow wow!" << endl;
	}
};

int main() {

	// pointer to an object of class A
	A* dog1 = new A();

	// calling a member function
	dog1->bark();

	// delete the dynamically-allocated object
	delete dog1;

	return 0;
}
