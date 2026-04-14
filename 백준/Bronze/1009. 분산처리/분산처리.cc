#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	vector<int> answer(n);
	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		if (!(cin >> a >> b)) break;

		int base = a % 10;
		if (base == 0) {
			answer[i] = 10;
			continue;
		}

		int power = b % 4;
		if (power == 0) power = 4;

		int result = 1;
		for (int j = 0; j < power; j++) {
			result = (result * base) % 10;
		}
		answer[i] = result;
	}

	for (const auto& c : answer) {
		cout << c << "\n";
	}

	return 0;
}