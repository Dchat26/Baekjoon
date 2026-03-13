#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	vector<pair <int, int>> nlist(n);
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i].first >> nlist[i].second)) return 0;
	}

	sort(nlist.begin(), nlist.end());

	for (int i = 0; i < n; i++) {
		cout << nlist[i].first << " " << nlist[i].second << "\n";
	}

	return 0;
}