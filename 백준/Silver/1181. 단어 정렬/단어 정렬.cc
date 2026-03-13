#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(const string& a, const string& b) {
	if (a.length() != b.length()) {
		return a.length() < b.length();
	}

	return a < b;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	vector<string> nlist(n);
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	sort(nlist.begin(), nlist.end(), compare);

	nlist.erase(unique(nlist.begin(), nlist.end()), nlist.end());

	for (int i = 0; i < nlist.size(); i++) {
		cout << nlist[i] << "\n";
	}

	return 0;
}