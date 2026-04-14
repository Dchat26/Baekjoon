#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0, s = 0;
	if (!(cin >> n >> s)) return 0;

	int target = (n / 100) * 100;
	while (target % s != 0) {
		target++;
	}

	int result = target % 100;

	cout << setfill('0') << setw(2) << result << "\n";

	return 0;
}