#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 0, b = 0;
	if (!(cin >> a >> b)) return 0;

	int count = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			count += 1;
			if (count == b) {
				cout << i << "\n";
				return 0;
			}
		}
	}

	cout << 0 << "\n";

	return 0;
}