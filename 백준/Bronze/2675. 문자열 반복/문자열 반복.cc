#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 0;
	if (!(cin >> t)) return 0;

	for (int i = 0; i < t; i++) {
		int r = 0;
		string s;

		if (!(cin >> r >> s)) return 0;

		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < r; k++) {
				cout << s[j];
			}
		}
		cout << "\n";
	}

	return 0;
}