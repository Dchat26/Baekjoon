#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0, m = 0;
	if (!(cin >> n >> m)) return 0;

	vector<string> nlist(n);
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	sort(nlist.begin(), nlist.end());

	int count = 0;
	for (int i = 0; i < m; i++) {
		string target;
		if (!(cin >> target)) return 0;

		if (binary_search(nlist.begin(), nlist.end(), target)) {
			count++;
		}
	}

	cout << count << "\n";

	return 0;
}