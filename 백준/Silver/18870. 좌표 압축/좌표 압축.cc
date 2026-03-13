#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;
	if (!(1 <= n) || !(n <= 1000000)) return 0;

	vector<int> nlist(n);
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	vector<int> sortn = nlist;
	sort(sortn.begin(), sortn.end());
	sortn.erase(unique(sortn.begin(), sortn.end()), sortn.end());

	for (int i = 0; i < n; i++) {
		auto it = lower_bound(sortn.begin(), sortn.end(), nlist[i]);
		cout << (it - sortn.begin()) << (i == n - 1 ? "" : " ");
	}
	cout << "\n";

	return 0;
}