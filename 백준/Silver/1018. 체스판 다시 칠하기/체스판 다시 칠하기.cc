#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void chess(const vector<string>* bored, int n, int m) {
	vector<int> count;
	count.reserve(2 * ((n - 7) * (m - 7)));

	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			int wdraw = 0;
			int bdraw = 0;
			for (int a = i; a < i + 8; a++) {
				for (int b = j; b < j + 8; b++) {
					if ((a + b) % 2 == 0) {
						if ((*bored)[a][b] != 'W') wdraw += 1;
						if ((*bored)[a][b] != 'B') bdraw += 1;
					}
					else {
						if ((*bored)[a][b] != 'B') wdraw += 1;
						if ((*bored)[a][b] != 'W') bdraw += 1;
					}
				}
			}
			count.push_back(wdraw);
			count.push_back(bdraw);
		}
	}
	
	if (!count.empty()) {
		int min_val = *min_element(count.begin(), count.end());
		cout << min_val << "\n";
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0, m = 0;
	if (!(cin >> n >> m)) return 0;

	vector<string> bored(n);
	for (int i = 0; i < n; i++) {
		cin >> bored[i];
		if (bored[i].length() != (size_t)m) return 0;
	}

	chess(&bored, n, m);

	return 0;
}