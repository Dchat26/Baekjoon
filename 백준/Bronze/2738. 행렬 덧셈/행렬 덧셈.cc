#include <iostream>
#include <vector>
using namespace std;

void add_ab(const vector<vector<int>>& alist, const vector<vector<int>>& blist, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << alist[i][j] + blist[i][j] << (j == m - 1 ? "" : " ");
		}
		cout << "\n";
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0, m = 0;
	if (!(cin >> n >> m)) return 0;

	vector<vector<int>> alist(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!(cin >> alist[i][j])) return 0;
		}
	}
	vector<vector<int>> blist(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!(cin >> blist[i][j])) return 0;
		}
	}

	add_ab(alist, blist, n, m);

	return 0;
}