#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	int n = 0;

	if (!(cin >> s >> n)) return 0;

	long long result = 0;
	for (int i = 0; i < s.length(); i++) {
		int num;
		if (s[i] >= '0' && s[i] <= '9') {
			num = s[i] - '0';
		}
		else {
			num = s[i] - 'A' + 10;
		}

		result = result * n + num;
	}

	cout << result << "\n";

	return 0;
}