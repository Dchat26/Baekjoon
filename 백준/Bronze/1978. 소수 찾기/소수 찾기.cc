#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	vector<int> nlist(n);
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		if (nlist[i] < 2) continue;

		bool isdecimal = true;
		for (int j = 2; j < nlist[i]; j++) {
			if (nlist[i] % j == 0) {
				isdecimal = false;
				break;
			}
		}

		if (isdecimal) count++;
	}

	cout << count << "\n";

	return 0;
}