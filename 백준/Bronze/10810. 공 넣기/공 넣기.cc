#include <iostream>
#include <vector>
using namespace std;

void Basket(vector<int>& basket, int m) {
	for (int change = 0; change < m; change++) {
		int i = 0, j = 0, k = 0;

		if (!(cin >> i >> j >> k)) return;

		for (int b = i; b <= j; b++) {
			basket[b] = k;
		}
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0, m = 0;

	if (!(cin >> n >> m)) return 0;

	vector<int> basket(n + 1, 0);

	Basket(basket, m);

	for (int i = 1; i <= n; i++) {
		cout << basket[i] << (i == n ? "" : " ");
	}
	cout << "\n";

	return 0;
}