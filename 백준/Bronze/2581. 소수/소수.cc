#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int m = 0, n = 0;
	if (!(cin >> m >> n)) return 0;

	int dsum = 0;
	int dmin = 10001;
	for (int i = m; i <= n; i++) {
		if (i < 2) continue;

		bool isdecimal = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				isdecimal = false;
				break;
			}
		}

		if (isdecimal) {
			dsum += i;
			if (dmin > i) {
				dmin = i;
			}
		}
	}

	if (dsum == 0) {
		cout << -1 << "\n";
	}
	else {
		cout << dsum << "\n" << dmin << "\n";
	}

	return 0;
}