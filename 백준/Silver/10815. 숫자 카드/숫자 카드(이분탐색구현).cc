#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void BN(const vector<int>& nlist, const vector<int>& mlist) {
	for (int i = 0; i < (int)mlist.size(); i++) {
		int start = 0;
		int end = (int)nlist.size() - 1;
		bool found = false;

		while (start <= end) {
			int mid = start + (end - start) / 2;
			int mvalue = mlist[i];
			int nvalue = nlist[mid];

			if (nvalue == mvalue) {
				found = true;
				break;
			}
			else if (nvalue < mvalue) {
				start = mid + 1;
			}
			else {
				end = mid - 1;
			}
		}

		cout << (found ? 1 : 0) << (i == (int)mlist.size() - 1 ? "" : " ");
	}
	cout << "\n";
}

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

	BN(nlist, mlist);

	return 0;
}
