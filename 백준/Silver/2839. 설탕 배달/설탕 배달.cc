#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	int count = 0;
	while (n >= 0) {
		if (n % 5 == 0) {
			count += n / 5;
			cout << count << "\n";
			return 0;
		}
		else {
			n -= 3;
			count += 1;
		}
	}
	cout << -1 << "\n";

	return 0;
}