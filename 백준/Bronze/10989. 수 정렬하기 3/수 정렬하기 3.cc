#include <iostream>

using namespace std;

int count_arr[10001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	for (int i = 0; i < n; i++) {
		int temp = 0;
		if (!(cin >> temp)) return 0;

		count_arr[temp]++;
	}

	for (int i = 0; i < 10001; i++) {
		if (count_arr[i] != 0) {
			for (int j = 0; j < count_arr[i]; j++) {
				cout << i << "\n";
			}
		}
	}

	return 0;
}