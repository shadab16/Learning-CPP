#include <iostream>

template <int n>
void print(const int (&nums)[n][n]) {

	int offset = 0;
	int limit = n - 1;

	while (offset < limit) {

		for (int r = offset, c = offset; c < limit; ++c) {
			std::cout << nums[r][c] << ' ';
		}

		for (int r = offset, c = limit; r < limit; ++r) {
			std::cout << nums[r][c] << ' ';
		}

		for (int r = limit, c = limit; c > offset; --c) {
			std::cout << nums[r][c] << ' ';
		}

		for (int r = limit, c = offset; r > offset; --r) {
			std::cout << nums[r][c] << ' ';
		}

		++offset;
		--limit;
	}

	if (offset == limit) {
		std::cout << nums[offset][offset] << ' ';
	}

	std::cout << '\n';
}

int main() {

	int nums[5][5] = {
		{ 1,  2,  3,  4,  5},
		{ 6,  7,  8,  9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25},
	};

	print(nums);

	return 0;
}

