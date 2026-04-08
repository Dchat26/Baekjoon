#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	int origin = n;
	int count = 0;

	while (1) {
		count++;
		int temp = (n / 10 + n % 10) % 10;
		n = (n % 10) * 10 + temp;

		if (origin == n) break;
	}

	cout << count << "\n"; 

	return 0;
}