#include <iostream>
#include <vector>

int main() {

	std::vector<int> nums;

	int n;
	while (std::cin >> n) {
		nums.push_back(n);
	}

	int size = nums.size();

	for (size_t i = 0; i < size - 1; ++i) {
		const int elem = nums[i];
		int dupes = 0;
		for (size_t src = i + 1, dest = i + 1; src < size; ++src) {
			if (nums[src] == elem) {
				++dupes;
				continue;
			}
			if (src != dest) {
				nums[dest] = nums[src];
			}
			++dest;
		}
		size -= dupes;
	}

	nums.resize(size);

	for (size_t i = 0; i < nums.size(); ++i) {
		std::cout << nums[i] << ' ';
	}
	std::cout << '\n';

	return 0;
}

