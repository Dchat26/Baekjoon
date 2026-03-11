#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void dissum(string* n) {
	int nVal = stoi(*n);
	int nlen = n->length();
	int start = max(0, nVal - 9 * nlen);

	for (int i = start; i <= nVal; i++) {
		int isum = 0;
		int temp = i;
		while (temp > 0) {
			isum += temp % 10;
			temp /= 10;
		}

		if (i + isum == nVal) {
			cout << i << "\n";
			return;
		}
	}

	cout << 0 << "\n";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string n;
	if (!(cin >> n)) return 0;

	dissum(&n);

	return 0;
}