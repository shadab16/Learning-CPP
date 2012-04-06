#include <iostream>
using namespace std;

int main() {

	const int limit = 10;

	long num[limit] = {};
	long sum = 0;
	double avg = 0;
	
	cout << "Enter " << limit << " integers:" << endl;

	for (int i = 0; i < limit; ++i) {

		cin >> num[i];
		sum += num[i];
	}

	avg = (double) sum / limit;

	cout	<< "\nSum: " << sum
		<< "\nAvg: " << avg << endl;

	return 0;
}
