#include <iostream>
#include <vector>
using namespace std;

void LessPrint(const vector<int>& arr, int x) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] < x) {
			cout << arr[i] << " ";
		}
	}
	cout << "\n";
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0, x = 0;
	if (!(cin >> n >> x)) return 0;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	LessPrint(arr, x);

	return 0;
}