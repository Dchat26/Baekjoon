#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 0, b = 0, v = 0;
	if (!(cin >> a >> b >> v)) return 0;

	cout << (v - b - 1) / (a - b) + 1 << "\n";

	return 0;
}