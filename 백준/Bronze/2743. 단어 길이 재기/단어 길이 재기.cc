#include <iostream>
using namespace std;

int main(void) {
	string s;

	if (!(cin >> s)) return 0;

	int count = 0;
	while (s[count] != '\0') {
		count++;
	}

	cout << count << "\n";

	return 0;
}