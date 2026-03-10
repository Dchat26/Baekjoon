#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0, m = 0;
	if (!(cin >> n >> m)) return 0;

	vector<int> nlist(n);
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	int value = 0;
	int max_val = 0;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				value = nlist[i] + nlist[j] + nlist[k];
				if (value <= m) {
					max_val = max(max_val, value);
				}
			}
		}
	}

	cout << max_val << "\n";

	return 0;
}