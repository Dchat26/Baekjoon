#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	for (int i = 0; i < n; i++) {
		int a = 0;
		if (!(cin >> a)) break;

		cout << a / 25 << " ";
		a %= 25;

		cout << a / 10 << " ";
		a %= 10;

		cout << a / 5 << " ";
		a %= 5;

		cout << a / 1 << "\n";
	}

	return 0;
}