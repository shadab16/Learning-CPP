#include <iostream>
using namespace std;

class Stack {
private:
	long elements[5];
	int top;
public:
	Stack();
	void push(long);
	void pop();
};

Stack::Stack() : top(0) {
	;
}

void Stack::push(long element) {
	if (top == 5) {
		cout << "ERROR: Stack is already full" << endl;
		return;
	}
	elements[top] = element;
	top++;

	cout << "++++\t" << element << endl;
}

void Stack::pop() {
	if (top == 0) {
		cout << "ERROR: Stack is already empty" << endl;
		return;
	}
	cout << "----\t" << elements[top-1] << endl;
	top--;
}

int main() {

	Stack stack1;

	stack1.push(456);
	stack1.push(49);
	stack1.push(-7684);
	stack1.push(56723);
	stack1.push(7623789);

	stack1.pop();
	stack1.pop();

	stack1.push(-654);

	stack1.pop();
	stack1.pop();
	stack1.pop();
	stack1.pop();
	stack1.pop();

	return 0;
}
