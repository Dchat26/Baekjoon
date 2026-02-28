#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

void SwapBasket(vector<int>& baskets, int m) {
	for (int k = 0; k < m; k++) {
		int i = 0, j = 0;

		if (!(cin >> i >> j)) break;

		swap(baskets[i], baskets[j]);
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0, m = 0;

	if (!(cin >> n >> m)) return 0;

	vector<int> baskets(n + 1);
	iota(baskets.begin(), baskets.end(), 0);

	SwapBasket(baskets, m);

	for (int i = 1; i <= n; i++) {
		cout << baskets[i] << (i == n ? "" : " ");
	}
	cout << "\n";

	return 0;
}
