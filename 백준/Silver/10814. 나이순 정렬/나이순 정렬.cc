#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
		return a.first < b.first;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;
	if (!(1 <= n) || !(n <= 100000)) return 0;

	vector<pair <int, string>> nlist(n);
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i].first >> nlist[i].second)) return 0;
		if (!(1 <= nlist[i].first) || !(nlist[i].first <= 200)) return 0;
	}

	stable_sort(nlist.begin(), nlist.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << nlist[i].first << " " << nlist[i].second << "\n";
	}

	return 0;
}