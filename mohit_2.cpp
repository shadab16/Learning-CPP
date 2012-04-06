#include <iostream>
#include <cstring>
using namespace std;

void removeString(char* haystack, char* needle) {

	char* pos = strstr(haystack, needle);

	if (pos != 0) {

		size_t i = 0;
		size_t hLength = strlen(haystack);
		size_t nLength = strlen(needle);

		for (i = (pos - haystack); i < hLength - nLength; ++i) {
			haystack[i] = haystack[i+nLength];
		}
		haystack[i] = 0;

		removeString(haystack, needle);
	}
}

int main() {

	char haystack[] = "XAAABBBY";
	char needle[] = "AB";

	removeString(haystack, needle);
	cout << haystack << endl;

	return 0;
}
