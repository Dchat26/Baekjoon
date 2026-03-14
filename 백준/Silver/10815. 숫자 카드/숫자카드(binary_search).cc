#include <iostream>
#include <vector>
#include <algorithm>

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

	int m = 0;
	if (!(cin >> m)) return 0;

	vector<int> mlist(m);
	for (int i = 0; i < m; i++) {
		if (!(cin >> mlist[i])) return 0;
	}

	sort(nlist.begin(), nlist.end());

	int msize = (int)mlist.size();
	for (int i = 0; i < msize; i++) {
		int target = mlist[i];
		if (binary_search(nlist.begin(), nlist.end(), target)) {
			cout << 1 << (i == msize - 1 ? "" : " ");
		}
		else {
			cout << 0 << (i == msize - 1 ? "" : " ");
		}
	}
	cout << "\n";

	return 0;
}
