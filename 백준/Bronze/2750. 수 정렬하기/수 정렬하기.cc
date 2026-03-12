#include <iostream>
#include <vector>

using namespace std;

void insert_sort(vector<int>& nlist, int n) {
	for (int i = 1; i < n; i++) {
		int key = nlist[i];
		int j = i - 1;
		while (j >= 0 && nlist[j] > key) {
			nlist[j + 1] = nlist[j];
			j -= 1;
		}

		nlist[j + 1] = key;
	}

	for (int i = 0; i < n; i++) {
		cout << nlist[i] << "\n";
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	vector<int> nlist(n);
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	insert_sort(nlist, n);

	return 0;
}