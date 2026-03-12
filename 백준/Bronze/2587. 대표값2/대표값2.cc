#include <iostream>
#include <vector>

using namespace std;

void insert_sort(vector<int>& nlist) {
	for (int i = 1; i < 5; i++) {
		int key = nlist[i];
		int j = i - 1;
		while (j >= 0 && nlist[j] > key) {
			nlist[j + 1] = nlist[j];
			j -= 1;
		}

		nlist[j + 1] = key;
	}

	int nsum = 0;
	for (int i = 0; i < 5; i++) {
		nsum += nlist[i];
	}

	cout << nsum / 5 << "\n" << nlist[2] << "\n";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> nlist(5);
	for (int i = 0; i < 5; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	insert_sort(nlist);

	return 0;
}