#include <iostream>
using namespace std;

class Animal {
public:
	void speak() {
		cout << "Speak" << endl;
	}

	void walk() {
		cout << "Walk" << endl;
	}
}; 

class Mammal : virtual public Animal {
};

class Carnivorous : virtual public Animal {
};

class Human : public Mammal, public Carnivorous {
};

int main() {

	Human mohit;
	mohit.speak();

	return 0;
}
