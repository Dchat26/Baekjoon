#include <iostream>

using namespace std;

void findxy(int x1, int y1, int result1, int x2, int y2, int result2) {
	for (int x = -999; x <= 999; x++) {
		for (int y = -999; y <= 999; y++) {
			if (x1 * x + y1 * y == result1 && x2 * x + y2 * y == result2) {
				cout << x << " " << y << "\n";
				return;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 0, b = 0, c = 0;
	int d = 0, e = 0, f = 0;
	if (!(cin >> a >> b >> c >> d >> e >> f)) return 0;

	findxy(a, b, c, d, e, f);

	return 0;
}