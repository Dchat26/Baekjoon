#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	bool submitted[31] = { false };

	for (int i = 0; i < 28; i++) {
		int num = 0;
		
		if (!(cin >> num)) break;

		submitted[num] = true;
	}

	for (int i = 1; i <= 30; i++) {
		if (!submitted[i]) {
			cout << i << "\n";
		}
	}

	return 0;
}