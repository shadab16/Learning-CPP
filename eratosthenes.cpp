#include <iostream>
#include <bitset>

#define LIMIT 10000000

int main() {

	std::bitset<LIMIT+1>* sieve = new std::bitset<LIMIT+1>();
	const size_t limit = LIMIT;

	for (size_t i = 0; i <= limit; ++i) {
		sieve->set(i, true);
	}

	sieve->set(0, false);
	sieve->set(1, false);

	for (size_t i = 2; i * i <= limit; ++i) {
		if (!sieve->test(i)) {
			continue;
		}
		for (size_t j = i; i * j <= limit; ++j) {
			sieve->set(i * j, false);
		}
	}

	size_t count = 0;
	for (size_t i = 0; i <= limit; ++i) {
		if (sieve->test(i)) ++count;
	}
	std::cout << count << std::endl;

	delete sieve;

	return 0;
}

