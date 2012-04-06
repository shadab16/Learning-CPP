#include<iostream>

void BinSearch(const int array[], int needle, int left, int right) {
	
	if (left > right) {
		return;
	}

	int mid = (left + right) / 2;	
	
	if (array[mid] > needle) {

		BinSearch(array, needle, left, mid - 1);
		return;

	} else if (array[mid] < needle) {

		BinSearch(array, needle, mid + 1, right);
		return;
	}

	std::cout << needle << std::endl;
}

int main() {

	const int haystack[7] = {1, 2, 3, 4, 5, 6, 7};
	const int needle = 6;

	BinSearch(haystack, needle, 0, 6);

	return 0;
}
