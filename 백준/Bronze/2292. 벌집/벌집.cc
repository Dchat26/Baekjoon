#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	int end_room = 1;
	int count = 1;
	while (n > end_room) {
		end_room += 6 * count;
		count += 1;
	}

	cout << count << "\n";

	return 0;
}