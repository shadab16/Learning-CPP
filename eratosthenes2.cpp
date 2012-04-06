#include <iostream>
#include <boost/dynamic_bitset.hpp>

int main() {

	typedef boost::dynamic_bitset<>::size_type bitset_size_t;

	const bitset_size_t limit = 10000000 + 1;
	boost::dynamic_bitset<> sieve(limit);

	sieve.set();

	sieve[0] = 0;
	sieve[1] = 0;

	for (bitset_size_t i = 2; i * i < limit; ++i) {
		if (!sieve[i]) {
			continue;
		}
		for (bitset_size_t j = i; i * j < limit; ++j) {
			sieve[i * j] = 0;
		}
	}

	std::cout << sieve.count() << std::endl;

	return 0;
}

