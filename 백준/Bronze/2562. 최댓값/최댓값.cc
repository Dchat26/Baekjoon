#include <iostream>
using namespace std;

void MaxIndex(const int* arr) {
	int max_val = arr[0];
	int val_index = 1;
	for (int i = 1; i < 9; i++) {
		if (max_val < arr[i]) {
			max_val = arr[i];
			val_index = i + 1;
		}
	}
	cout << max_val << "\n" << val_index << "\n";
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[9];
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	MaxIndex(arr);

	return 0;
}