#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	cout << (int)pow(((int)pow(2, n) + 1), 2) << "\n";

	return 0;
}