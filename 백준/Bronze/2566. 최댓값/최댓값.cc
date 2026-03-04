#include <iostream>
#include <vector>
using namespace std;

void max_row(const vector<vector<int>>& data) {
	int max_val = -1;
	int rowA = 1;
	int rowB = 1;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (data[i][j] > max_val) {
				max_val = data[i][j];
				rowA = i + 1;
				rowB = j + 1;
			}
		}
	}

	cout << max_val << "\n";
	cout << rowA << " " << rowB << "\n";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<vector<int>> data(9, vector<int>(9, 0));
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (!(cin >> data[i][j])) return 0;
		}
	}

	max_row(data);

	return 0;
}