#include <iostream>
#include <string>
#include <vector>

using namespace std;

void insert_sort(vector<int>& arr) {
	int n = arr.size();
	for (int i = 0; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] < key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	if (!(cin >> s)) return 0;

	vector<int> nlist;
	for (int i = 0; i < s.length(); i++) {
		nlist.push_back(s[i] - '0');
	}

	insert_sort(nlist);

	for (int i = 0; i < nlist.size(); i++) {
		cout << nlist[i];
	}
	cout << "\n";


	return 0;
}