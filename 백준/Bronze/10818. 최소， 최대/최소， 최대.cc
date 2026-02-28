#include <iostream>
#include <vector>
using namespace std;

void MM(const vector<int>& arr) {
	int min_val = arr[0], max_val = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] < min_val) {
			min_val = arr[i];
		}
		if (arr[i] > max_val) {
			max_val = arr[i];
		}
	}
	cout << min_val << " " << max_val << "\n";
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0;
	if (!(cin >> n)) return 0;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	MM(arr);

	return 0;
}