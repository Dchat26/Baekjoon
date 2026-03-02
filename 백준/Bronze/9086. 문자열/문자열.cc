#include <iostream>
using namespace std;

int main(void) {
	int n = 0;

	if (!(cin >> n)) return 0;

	for (int i = 0; i < n; i++) {
		string s;

		if (!(cin >> s)) return 0;

		int count = 0;
		while (s[count] != '\0') {
			count++;
		}

		cout << s[0] << s[count - 1] << "\n";
	}

	return 0;
}