#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	string s1;
	if (!(cin >> s1)) return 0;

	for (int i = 1; i < n; i++) {
		string s2;
		if (!(cin >> s2)) break;

		for (int j = 0; j < s1.size(); j++) {
			if (s1[j] != s2[j]) s1[j] = '?';
		}
	}

	cout << s1 << "\n";

	return 0;
}