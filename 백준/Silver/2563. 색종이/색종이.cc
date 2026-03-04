#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int pcount = 0;
	if (!(cin >> pcount)) return 0;

	vector<vector<int>> paper(100, vector<int>(100, 0));

	for (int i = 0; i < pcount; i++) {
		int x = 0, y = 0;
		if (!(cin >> x >> y)) return 0;

		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				paper[j][k] = 1;
			}
		}
	}

	int total = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			total += paper[i][j];
		}
	}

	cout << total << "\n";

	return 0;
}