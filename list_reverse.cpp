#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>

class List {
private:
	struct Node {
		std::string data;
		Node* next;
		Node(std::string s) : data(s), next(0) {}
	};

	void reverse(Node* node) {
		if (!node || !node->next) {
			return;
		}
		reverse(node->next);
		node->next->next = node;
		node->next = 0;
	}

	Node* head;
	Node* tail;

public:
	List() : head(0), tail(0) {}

	~List() {
		clear();
	}

	void add(const std::string& data) {
		Node* n = new Node(data);
		if (!head) {
			head = n;
		}
		if (tail) {
			tail->next = n;
		}
		tail = n;
	}

	void clear() {
		while (head) {
			Node* next = head->next;
			delete head;
			head = next;
		}
		tail = 0;
	}

	void reverse() {
		reverse(head);
		std::swap(head, tail);
	}

	void print(std::ostream& os) const {
		for (const Node* node = head; node; node = node->next) {
			os << node->data << '\n';
		}
	}
};

std::ostream& operator<<(std::ostream& os, const List& list) {
	list.print(os);
	return os;
}

int main() {

	List names;
	names.add("Foo");
	names.add("Bar");
	names.add("Baz");
	names.add("Qux");
	names.add("Lol");

	std::cout << "Original:\n" << names << std::endl;

	names.reverse();
	std::cout << "Reversed:\n" << names << std::endl;

	names.clear();
	std::cout << "Empty:\n" << names << std::endl;
}
