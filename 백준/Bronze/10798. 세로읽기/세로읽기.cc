#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> data(5);
	for (int i = 0; i < 5; i++) {
		if (!(cin >> data[i])) return 0;
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (i < data[j].length()) {
				cout << data[j][i];
			}
		}
	}
	cout << "\n";

	return 0;
}