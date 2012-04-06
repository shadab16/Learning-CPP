#include <iostream>
using namespace std;

class A {
public:
	A(int x, int y) {
		cout << "Object created. Woot!" << endl;
		cout << "Values passed: " << x << ", and " << y << endl;
	}
};

int main() {

	A rahul(1337, 56);

	return 0;
}
